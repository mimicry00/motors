#include <Servo.h>

Servo myservo; 
int pos=0;

void setup() {
  Serial.begin(9600);
  myservo.attach(5);
  myservo.write(90);
}

void loop() {
  //potentiometer to A0
  int val = analogRead(A0);
  Serial.println(val);
  
  int pos = map(val, 0, 1023, 0, 180);
  myservo.write(pos);

  // for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
  //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
  //   delay(100);                       // waits 15 ms for the servo to reach the position
  // }
  // for (pos = 180; pos >= 0; pos -= 1) { // goes from 0 degrees to 180 degrees
  //   myservo.write(pos);              // tell servo to go to position in variable 'pos'
  //   delay(100);                       // waits 15 ms for the servo to reach the position
  // }
}
