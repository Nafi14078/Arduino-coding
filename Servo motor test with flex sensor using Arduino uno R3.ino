// C++ code
//
#include<Servo.h>
int servo_pin=10;
int flex;
int angle_value;
int servo;
Servo myServo;


void setup()
{
  Serial.begin(9600);
  myServo.attach(servo_pin);
}
void loop()
{
  angle_value=angle();
  myServo.write(servo);
  Serial.println(servo);
  
}
int angle()
{
  flex=analogRead(A0);
  
  servo=map(flex,682,275,0,180);
  return servo;
}
  