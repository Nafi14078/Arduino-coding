// C++ code
//
int red=4;
int blue=6;
int green=7;
int force;
void setup()
{
  Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop()
{
  force=analogRead(A0);
  Serial.println(force);
  if(force>=0&&force<150)
  {
    greenblink();
  }
  else if(force>=150&&force<300)
  {
    blueblink();
  }
  else
  {
    redblink();
  }
}
  
  void greenblink()
  {
    digitalWrite(green,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(blue,LOW);
  }
   void blueblink()
  {
    digitalWrite(blue,HIGH);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
  }
   void redblink()
  {
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
    digitalWrite(blue,LOW);
  }
  
  
  
  