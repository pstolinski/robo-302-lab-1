#include <Arduino.h>
#include "stepper.h"

void setup() {
  stepperInit();
}

void loop() {
  stepperCCW(200);
}
