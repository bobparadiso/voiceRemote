#ifndef __STATUS_LEDS_H_
#define __STATUS_LEDS_H_

enum LED_STATES {LED_OFF, LED_READY, LED_ACK, LED_NACK};

void setupStatusLEDs();
void setLEDState(int state);

#endif
