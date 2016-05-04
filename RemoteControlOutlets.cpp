#include <Arduino.h>
#include "RemoteControlOutlets.h"

#define FAN_PIN A0
#define LAMP_PIN A1
#define TOGGLE_HOLD_TIME 500

//
void setupRemoteControlOutlets()
{
	pinMode(FAN_PIN, OUTPUT);
	pinMode(LAMP_PIN, OUTPUT);

	digitalWrite(FAN_PIN, LOW);
	digitalWrite(LAMP_PIN, LOW);
}

//
void toggleFanPower()
{
	digitalWrite(FAN_PIN, HIGH);
	delay(TOGGLE_HOLD_TIME);
	digitalWrite(FAN_PIN, LOW);
}

//
void toggleLampPower()
{
	digitalWrite(LAMP_PIN, HIGH);
	delay(TOGGLE_HOLD_TIME);
	digitalWrite(LAMP_PIN, LOW);
}
