#include <Servo.h>
 
Servo myservo;
 
void setup() {
  myservo.attach(11); // attaches the servo on pin 13 to the servo object
  myservo.write(90);
}
 
void loop() 
{
  myservo.write(0); 
  delay(500);
  myservo.write(180); 
  delay(500);
}
