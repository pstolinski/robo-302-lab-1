#include "stepper.h"

void stepperInit() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
}

void step(int steps) {
  for (int i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(STEP_DELAY);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(STEP_DELAY);
  }
}

void stepperCW(int steps) {
  digitalWrite(DIR_PIN, HIGH);
  step(steps);
}

void stepperCCW(int steps) {
  digitalWrite(DIR_PIN, LOW);
  step(steps);
}