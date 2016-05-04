#include <avr/pgmspace.h>

#include "IR_codes.h"

const uint16_t IRsignal_tvPower[] PROGMEM = {38,
	3600, 1700,
	400, 400,
	400, 1300,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 1300,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 1300,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 400,
	400, 1300,
	400, 400,
	400, 1300,
	400, 1300,
	400, 1300,
	400, 1300,
	400, 400,
	400, 400,
	400, 1300,
	400, 400,
	400, 1300,
	400, 1300,
	400, 1300,
	400, 1300,
	400, 400,
	400, 1300,
	400, 0};

const uint16_t IRsignal_tvVolUp[] PROGMEM = {38,
	9000, 4500,
	600, 500,
	600, 1700,
	600, 500,
	600, 500,
	600, 1700,
	600, 500,
	600, 500,
	600, 500,
	600, 500,
	600, 500,
	600, 1700,
	600, 500,
	600, 1700,
	600, 1700,
	600, 500,
	600, 500,
	600, 500,
	600, 1700,
	600, 1700,
	600, 500,
	600, 500,
	600, 500,
	600, 500,
	600, 500,
	600, 1700,
	600, 500,
	600, 500,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tvVolDown[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tvMute[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tvNext[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tvPrevious[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_0[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_1[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	500, 600,
	500, 600,
	500, 1700,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	500, 600,
	500, 1700,
	500, 1700,
	500, 600,
	500, 600,
	500, 1700,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	500, 1700,
	500, 1700,
	500, 600,
	500, 1700,
	500, 1700,
	500, 1700,
	600, 0};

const uint16_t IRsignal_tv_2[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_3[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_4[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1600,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_5[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_6[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 500,
	600, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_7[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_8[] PROGMEM = {38,
	9000, 4500,
	600, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_tv_9[] PROGMEM = {38,
	9000, 4500,
	600, 500,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 600,
	500, 600,
	500, 1700,
	600, 1700,
	600, 1700,
	600, 0};

const uint16_t IRsignal_VCR_Power[] PROGMEM = {38,
	8400, 4200,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};

const uint16_t IRsignal_VCR_Play[] PROGMEM = {38,
	8400, 4200,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 23900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};

const uint16_t IRsignal_VCR_Pause[] PROGMEM = {38,
	8400, 4100,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};

const uint16_t IRsignal_VCR_Stop[] PROGMEM = {38,
	8400, 4200,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 23800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};

const uint16_t IRsignal_VCR_FastForward[] PROGMEM = {38,
	8400, 4100,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 23900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22900,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 500,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};

const uint16_t IRsignal_VCR_Rewind[] PROGMEM = {38,
	8400, 4100,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 22800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 21800,
	600, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 1600,
	500, 500,
	500, 1600,
	500, 1600,
	500, 1600,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 500,
	500, 0};