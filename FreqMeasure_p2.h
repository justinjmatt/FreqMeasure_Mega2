#ifndef FreqMeasure_h_p2
#define FreqMeasure_h_p2

#include <Arduino.h>

class FreqMeasureClass_p2 {
public:
	static void begin(void);
	static uint8_t available(void);
	static uint32_t read(void);
	static float countToFrequency(uint32_t count);
	static void end(void);
};

extern FreqMeasureClass_p2 FreqMeasure_p2;

#endif

