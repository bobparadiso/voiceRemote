#include <Arduino.h>

//digital pins 10 & 11
#define IR_LED_PORT PORTB
#define IR_LED_DDR DDRB
#define IR_LED_Mask (_BV(2) | _BV(3))

//
void setupIR_TX()
{
	IR_LED_DDR |= IR_LED_Mask;
}

// This procedure sends a given kHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(uint16_t kHz, long microsecs)
{
	int waveLength = 1000 / kHz;
	int halfWaveLength = waveLength / 2;
	//Serial.println(waveLength);

	cli();  // this turns off any background interrupts

	while (microsecs > 0)
	{
		IR_LED_PORT |= IR_LED_Mask;
		delayMicroseconds(halfWaveLength);
		IR_LED_PORT &= ~IR_LED_Mask;
		delayMicroseconds(halfWaveLength);

		microsecs -= waveLength;
	}

	sei();  // this turns them back on
}

// 
void sendCode(const uint16_t *code)
{
	//Serial.println("\nSendCode");

	const uint16_t *pulse = code;
	uint16_t kHz = pgm_read_word(pulse++);
	while (true)
	{
		int on = pgm_read_word(pulse++);
		int off = pgm_read_word(pulse++);
		//    Serial.print("on:");
		//    Serial.println(on);
		pulseIR(kHz, on);
		delayMicroseconds(off);
		//    Serial.print("off:");
		//    Serial.println(off);
		if (off == 0)
			return;
	}
}
