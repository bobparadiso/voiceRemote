#include <Arduino.h>
#include "SoftwareSerial_Bob.h"
#include "easyVR_wrapper.h"

SoftwareSerial_Bob easyVR_port(12, 13);
EasyVR easyvr(easyVR_port);

//
void setupEasyVR()
{
	// bridge mode?
	int mode = easyvr.bridgeRequested(Serial);
	switch (mode)
	{
		case EasyVR::BRIDGE_NONE:
			// setup EasyVR serial port
			easyVR_port.begin(9600);
			// run normally
			Serial.println(F("---"));
			Serial.println(F("Bridge not started!"));
			break;

		case EasyVR::BRIDGE_NORMAL:
			// setup EasyVR serial port (low speed)
			easyVR_port.begin(9600);
			// soft-connect the two serial ports (PC and EasyVR)
			easyvr.bridgeLoop(Serial);
			// resume normally if aborted
			Serial.println(F("---"));
			Serial.println(F("Bridge connection aborted!"));
			break;

		case EasyVR::BRIDGE_BOOT:
			// setup EasyVR serial port (high speed)
			easyVR_port.begin(115200);
			// soft-connect the two serial ports (PC and EasyVR)
			easyvr.bridgeLoop(Serial);
			// resume normally if aborted
			Serial.println(F("---"));
			Serial.println(F("Bridge connection aborted!"));
			break;
	}

	// initialize EasyVR  
	while (!easyvr.detect())
	{
		Serial.println(F("EasyVR not detected!"));
		delay(1000);
	}
}
