#include <Stepper.h>

// change this to fit the number of steps per revolution
// for your motor
const int stepsPerRevolution = 200;  

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, 3, 4, 5, 6);

void setup() {
  // set the speed at 60 rpm:
  myStepper.setSpeed(60);
}

void loop() {
  // step one revolution  in one direction:
  myStepper.step(stepsPerRevolution);
  delay(500);

  // step one revolution in the other direction:
  myStepper.step(-stepsPerRevolution);
  delay(500);
}

