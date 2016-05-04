#include <Arduino.h>
#include "SoftwareSerial_Bob.h"
#include "speech.h"
#include "easyVR_wrapper.h"
#include "EasyVR.h"

SoftwareSerial_Bob speech(5,6);

void cmd(char *str);
void say(char *str);

//
void setupSpeech()
{
	speech.begin(9600);
	delay(3000);

	cmd("n3");
	//cmd("v10");
	cmd("v-8");
	cmd("w175");
	//cmd("w250");
}

//
void cmd(char *str)
{
	speech.listen();

	//flush rx
	while (speech.available())
		speech.read();
		
	Serial.print("sending: ");
	Serial.println(str);
	
	speech.println(str);

	while (1)
	{
		if (!speech.available())
			continue;
			
		char c = speech.read();
		Serial.print(c);
		if (c == ':')
			break;
	}
	
	easyVR_port.listen();
}

//
void say(char *str)
{
	static char cmdBuf[64];
	sprintf(cmdBuf, "s%s", str);
	cmd(cmdBuf);
}
