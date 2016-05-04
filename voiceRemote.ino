#include "SoftwareSerial_Bob.h"
#include "easyVR_wrapper.h"
#include "speech.h"
#include "statusLEDs.h"
#include "IR_codes.h"
#include "IR_tx.h"
#include "RemoteControlOutlets.h"

#define MAX_ATTEMPTS 8

#define NUMBER_GROUP 3
#define MAIN_GROUP 5
#define TV_GROUP 6
#define VCR_GROUP 7

#define BUTTON_PIN 8 //PB0 PCINT0

#define DIGIT_DELAY 250

#define REPEAT_DELAY 750 //ms
#define DEBOUNCE_ITERATIONS 10000 //iterations
#define LED_DURATION 500 //ms

//
volatile uint8_t buttonPressed = 0;
ISR(PCINT0_vect)
{
	SoftwareSerial_Bob::handle_interrupt();
	buttonPressed |= ((PINB & 1) == 0);
}

//
ISR(PCINT1_vect)
{
	SoftwareSerial_Bob::handle_interrupt();
}

//
ISR(PCINT2_vect)
{
	SoftwareSerial_Bob::handle_interrupt();
}

// 
void setup()
{
	setupIR_TX();
	
	Serial.begin(9600);

	//while (1)
	//{
	//sendCode(IRsignal_acPower);
	//delay(500);
	//}

	/*	
	sendCode(IRsignal_tv_8);
	delay(DIGIT_DELAY);
	sendCode(IRsignal_tv_9);
	delay(DIGIT_DELAY);
	sendCode(IRsignal_tv_5);
	delay(DIGIT_DELAY);

	delay(10000);

	sendCode(IRsignal_tv_8);
	delay(DIGIT_DELAY);
	sendCode(IRsignal_tv_7);
	delay(DIGIT_DELAY);
	sendCode(IRsignal_tv_9);
	delay(DIGIT_DELAY);
	*/

	setupSpeech();	
	setupEasyVR();

	pinMode(BUTTON_PIN, INPUT_PULLUP);
	PCICR |= _BV(PCIE0); //enable pin change interrupts
	PCMSK0 = 0b00000001;

	setupStatusLEDs();
	setupRemoteControlOutlets();
		
	say("hello");
}

enum MAIN_MENU {TV, VCR, FAN, LAMP, MAIN_MENU_SIZE};
enum TV_MENU {TV_POWER, TV_VOLUME_UP, TV_VOLUME_DOWN, TV_MUTE, TV_NEXT, TV_PREVIOUS, TV_CHANNEL, TV_MENU_SIZE};
enum VCR_MENU {VCR_POWER, VCR_PLAY, VCR_PAUSE, VCR_STOP, VCR_FAST_FORWARD, VCR_REWIND, VCR_MENU_SIZE};

//
char *getMainMenuStr(uint8_t ID)
{
	switch (ID)
	{
	case TV: return "t v";
	case VCR: return "v c r";
	case FAN: return "fan";
	case LAMP: return "lamp";
	}
	
	return "error";
}

//
char *getTVMenuStr(uint8_t ID)
{
	switch (ID)
	{
	case TV_POWER: return "power";
	case TV_VOLUME_UP: return "louder";
	case TV_VOLUME_DOWN: return "softer";
	case TV_MUTE: return "mute";
	case TV_NEXT: return "next";
	case TV_PREVIOUS: return "previous";
	case TV_CHANNEL: return "channel";
	}
	
	return "error";
}

//
char *getVCRMenuStr(uint8_t ID)
{
	switch (ID)
	{
	case VCR_POWER: return "power";
	case VCR_PLAY: return "play";
	case VCR_PAUSE: return "pause";
	case VCR_STOP: return "stop";
	case VCR_FAST_FORWARD: return "fast forward";
	case VCR_REWIND: return "rewind";
	}
	
	return "error";
}

//
char *getNumStr(uint8_t num)
{
	switch (num)
	{
	case 0: return "0";
	case 1: return "1";
	case 2: return "2";
	case 3: return "3";
	case 4: return "4";
	case 5: return "5";
	case 6: return "6";
	case 7: return "7";
	case 8: return "8";
	case 9: return "9";
	}
	
	return "error";
}

//
#define CHANNEL_DIGITS 2
void setChannel()
{
	int ID;
	uint8_t digits[CHANNEL_DIGITS];

	for (int i = 0; i < CHANNEL_DIGITS; i++)
	{
		uint8_t attempts = 0;
		while (1)
		{
			setLEDState(LED_READY);
			say("ready");
			Serial.print(F("Say a number in wordset\r\n"));
			easyvr.recognizeWord(NUMBER_GROUP);
			while (!easyvr.hasFinished());

			ID = easyvr.getWord();
			Serial.print("got: ");
			Serial.println(getNumStr(ID));

			if (ID == -1)
			{
				setLEDState(LED_NACK);
				delay(LED_DURATION);
				say("nope");
				attempts++;
				if (attempts >= MAX_ATTEMPTS)
				{
					say("sorry, giving up");
					return;
				}
			}
			else
			{
				setLEDState(LED_ACK);
				delay(LED_DURATION);
				say(getNumStr(ID));
				break;
			}
		}
		
		digits[i] = ID;
	}
	
	for (int i = 0; i < CHANNEL_DIGITS; i++)
	{
		if (i == 0 && digits[i] == 0)
			continue;
			
		switch (digits[i])
		{
		case 0: sendCode(IRsignal_tv_0); break;
		case 1: sendCode(IRsignal_tv_1); break;
		case 2: sendCode(IRsignal_tv_2); break;
		case 3: sendCode(IRsignal_tv_3); break;
		case 4: sendCode(IRsignal_tv_4); break;
		case 5: sendCode(IRsignal_tv_5); break;
		case 6: sendCode(IRsignal_tv_6); break;
		case 7: sendCode(IRsignal_tv_7); break;
		case 8: sendCode(IRsignal_tv_8); break;
		case 9: sendCode(IRsignal_tv_9); break;
		}
		
		delay(DIGIT_DELAY);
	}	
}

//
void executeTVCommand(uint8_t ID)
{
	uint8_t i;
	
	switch (ID)
	{
		case TV_POWER: sendCode(IRsignal_tvPower); break;

		case TV_VOLUME_UP:
			for (i = 0; i < 4; i++)
			{ 
				sendCode(IRsignal_tvVolUp);
				delay(REPEAT_DELAY);
			} 
			break;

		case TV_VOLUME_DOWN:
			for (i = 0; i < 4; i++)
			{ 
				sendCode(IRsignal_tvVolDown);
				delay(REPEAT_DELAY);
			} 
			break;

		case TV_MUTE: sendCode(IRsignal_tvMute); break;

		case TV_NEXT: sendCode(IRsignal_tvNext); break;
		case TV_PREVIOUS: sendCode(IRsignal_tvPrevious); break;

		case TV_CHANNEL: setChannel(); break;
	} 
}

//
void executeVCRCommand(uint8_t ID)
{
	switch (ID)
	{
		case VCR_POWER: sendCode(IRsignal_VCR_Power); break;
		case VCR_PLAY: sendCode(IRsignal_VCR_Play); break;
		case VCR_PAUSE: sendCode(IRsignal_VCR_Pause); break;
		case VCR_STOP: sendCode(IRsignal_VCR_Stop); break;
	} 
}

//
void waitForButtonRelease()
{
	Serial.print(F("Waiting for button release.\r\n"));
	uint32_t i = 0;
	while (1)
	{
		if (digitalRead(BUTTON_PIN) == HIGH)
			i++;
		else
			i = 0;
			
		if (i == DEBOUNCE_ITERATIONS)
			return;
	}
}

//listen for command in menu
int8_t runVoiceMenu(uint8_t group, char *(*strFunc)(uint8_t))
{
	int8_t ID;
	uint8_t attempts = 0;
	
	while (1)
	{
		say("ready");
		setLEDState(LED_READY);
		Serial.print(F("say command"));
		easyvr.recognizeWord(group);
		while (!easyvr.hasFinished());

		ID = easyvr.getWord();
		Serial.print("got: ");
		Serial.println(ID);

		if (ID == -1)
		{
			setLEDState(LED_NACK);
			delay(LED_DURATION);
			say("nope");
			attempts++;
			if (attempts >= MAX_ATTEMPTS)
			{
				say("sorry, giving up");
				break;
			}
		}
		else
		{
			setLEDState(LED_ACK);
			delay(LED_DURATION);
			say(strFunc(ID));
			break;
		}
	}
	
	return ID;
}

//
void loop_voiceControl()
{
	int8_t ID;

	setLEDState(LED_OFF);
	Serial.print(F("Waiting for button press.\r\n"));
	while(digitalRead(BUTTON_PIN) == HIGH);
	waitForButtonRelease();

	ID = runVoiceMenu(MAIN_GROUP, getMainMenuStr);	
	switch (ID)
	{
	case TV:
		ID = runVoiceMenu(TV_GROUP, getTVMenuStr);
		executeTVCommand(ID);
		break;

	case VCR:
		ID = runVoiceMenu(VCR_GROUP, getVCRMenuStr);
		executeVCRCommand(ID);
		break;
		
	case FAN:
		toggleFanPower();
		break;

	case LAMP:
		toggleLampPower();
		break;
	}
}

//say each menu item out loud, and check if button is pressed (selecting it)
int8_t runButtonMenu(char *(*strFunc)(uint8_t), uint8_t menuSize)
{
	//loop through commands
	int8_t ID = 0;
	buttonPressed = 0;
	while (1)
	{
		say(strFunc(ID));
		delay(100);

		Serial.print(F("checking button\r\n"));
		if (buttonPressed)
		{
			say(strFunc(ID));
			break;
		}

		ID++;
		if (ID >= menuSize)
		{
			ID = -1;
			break;
		}
	}

	waitForButtonRelease();
	return ID;
}

//
void loop_buttonControl()
{
	int8_t ID;

	setLEDState(LED_OFF);
	Serial.print(F("Waiting for button press.\r\n"));
	while(digitalRead(BUTTON_PIN) == HIGH);
	waitForButtonRelease();
	ID = runButtonMenu(getMainMenuStr, MAIN_MENU_SIZE);

	switch (ID)
	{
	case TV:
		ID = runButtonMenu(getTVMenuStr, TV_MENU_SIZE);
		executeTVCommand(ID);
		break;

	case VCR:
		ID = runButtonMenu(getVCRMenuStr, VCR_MENU_SIZE);
		executeVCRCommand(ID);
		break;
		
	case FAN:
		toggleFanPower();
		break;

	case LAMP:
		toggleLampPower();
		break;
	}
}

//
void loop()
{
	//one and only one of these should be uncommented
	loop_buttonControl();
	//loop_voiceControl();
}
