#ifndef STEPPERMOTORS_H
#define STEPPERMOTORS_H

#include <Arduino.h>

#define STEP_PIN 4
#define DIR_PIN 5
#define STEP_DELAY 1000 // us, min is 1us per A4988 datasheet

void stepperInit();
void stepperCW(int steps);
void stepperCCW(int steps);

#endif
