// C++ code
//soil moisture sensor
int red=10;
int blue=11;
int green=12;
int moisture;

void setup()
 {
   Serial.begin(9600);
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}
void loop()
{
  moisture=analogRead(A0);
  Serial.println(moisture);
  if(moisture>=0&&moisture<300)
  {
    yellow();
  }
  else if(moisture>=300&&moisture<600)
  {
    purple();
  }
  else
  {
    redlight();
  }
}

void yellow()
{
  
    digitalWrite(red,HIGH);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
  }
  
  void purple()
  {
    digitalWrite(red,HIGH);
    digitalWrite(blue,HIGH);
    digitalWrite(green,LOW);
  }
  void redlight()
  {
    digitalWrite(red,HIGH);
    digitalWrite(blue,LOW);
    digitalWrite(green,LOW);
  }

   
