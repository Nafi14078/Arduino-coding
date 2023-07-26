// C++ code
//-40=20,125=358

int temp;
int value;
void setup()
{
  Serial.begin(9600);
  pinMode(12,OUTPUT);
}
void loop()
{
  value=temperature();
  Serial.println(value);
  if(value>=-40&&value<100)
  {
    digitalWrite(12,HIGH);
  }
  else
  {
    digitalWrite(12,LOW);
  }
}
int temperature()
{
  temp=analogRead(A0);
  return map(temp,20,358,-40,125);
}