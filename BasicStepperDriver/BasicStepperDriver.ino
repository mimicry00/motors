#include <Arduino.h>
#include "BasicStepperDriver.h"

#define MOTOR_STEPS 200
#define RPM 120

#define MICROSTEPS 1

#define DIR 8
#define STEP 9

BasicStepperDriver stepper(MOTOR_STEPS, DIR, STEP);


void setup() {
    stepper.begin(RPM, MICROSTEPS);
}

void loop() {
    stepper.rotate(360);

    //stepper.move(-MOTOR_STEPS*MICROSTEPS);

    delay(1000);
}
