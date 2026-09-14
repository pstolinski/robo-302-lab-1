#ifndef STEPPERMOTORS_H
#define STEPPERMOTORS_H

#include <Arduino.h>

#define STEP_PIN 4
#define DIR_PIN 5
#define STEP_DELAY 2500

void stepperInit();
void stepperCW(int steps);
void stepperCCW(int steps);

#endif