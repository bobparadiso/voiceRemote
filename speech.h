#ifndef __SPEECH_H_
#define __SPEECH_H_

#include "SoftwareSerial_Bob.h"

extern SoftwareSerial_Bob speech;

void setupSpeech();
void say(char *str);

#endif
