#include <Arduino.h>
#include "statusLEDs.h"

#define READY_LED_PIN 4
#define ACK_LED_PIN 3
#define NACK_LED_PIN 2

//
void setupStatusLEDs()
{
	pinMode(READY_LED_PIN, OUTPUT);
	pinMode(ACK_LED_PIN, OUTPUT);
	pinMode(NACK_LED_PIN, OUTPUT);
	setLEDState(LED_OFF);
}

//
void setLEDState(int state)
{
	digitalWrite(READY_LED_PIN, (state == LED_READY) ? LOW : HIGH);
	digitalWrite(ACK_LED_PIN, (state == LED_ACK) ? LOW : HIGH);
	digitalWrite(NACK_LED_PIN, (state == LED_NACK) ? LOW : HIGH);
}
