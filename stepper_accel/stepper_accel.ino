#include <AccelStepper.h>

AccelStepper myStepper;

void setup() {
  myStepper.setMaxSpeed(1000);
  myStepper.setAcceleration(50);
  myStepper.setSpeed(200);
  myStepper.moveTo(200);
}

void loop() {

  if(myStepper.distanceToGo()==0) {
    myStepper.moveTo(-myStepper.currentPosition());
  }

  myStepper.run();

}
