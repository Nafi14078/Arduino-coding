// C++ code
//
int Light=13;
int voltage;
void setup()
{
  Serial.begin(9600);
  pinMode(Light,OUTPUT);
  //int voltage=analogRead(A0);
 // Serial.println(voltage);
}
void loop()
{
 voltage=analogRead(A0);
  Serial.println(voltage);
  daynight();
}

void daynight()
{
  if(voltage<400)
  {
    digitalWrite(Light,HIGH);//night
    delay(1000);
  }
  else
  {
    digitalWrite(Light,LOW);//day
    delay(1000);
  }
}