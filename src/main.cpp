#include <Arduino.h>
#include "stepper.h"

void setup() {
  stepperInit();
}

void loop() {
  //stepperCW(200);
  //stepperCCW(200);

  //increases step speed conservatively
  for(int delayTime = 2500; delayTime >= 250; delayTime -= 250) {
    digitalWrite(DIR_PIN, HIGH);
    for (int i = 0; i < 200; i++) {
      digitalWrite(STEP_PIN, HIGH);
      delayMicroseconds(delayTime);
      digitalWrite(STEP_PIN, LOW);
      delayMicroseconds(delayTime);
    }
    delay(500); 
    digitalWrite(DIR_PIN, LOW);
    for (int i = 0; i < 200; i++) {
      digitalWrite(STEP_PIN, HIGH);
      delayMicroseconds(delayTime);
      digitalWrite(STEP_PIN, LOW);
      delayMicroseconds(delayTime);
    }
    delay(500); 
  }
}