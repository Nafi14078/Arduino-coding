
int red=13;
int blue=12;
int green=11;

void setup()
{
  pinMode(red,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop()
{
  //redblink();
 // blueblink();
  //greenblink();
    rgb();
  //yellow();
 // purple();
  //cyan();
    ypc();
}

void redblink()
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
}

void blueblink()
{
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
}

void greenblink()
{
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
}

void rgb()
{
  digitalWrite(red,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  delay(1000);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  delay(1000);
}

void yellow()
{
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(1000);
}

void purple()
{
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  delay(1000);
}

void cyan()
{
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(1000);
}

void ypc()
{
  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
  delay(1000);
  digitalWrite(red,HIGH);
  digitalWrite(blue,HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  digitalWrite(blue,LOW);
  delay(1000);
  digitalWrite(blue,HIGH);
  digitalWrite(green,HIGH);
  delay(1000);
  digitalWrite(blue,LOW);
  digitalWrite(green,LOW);
  delay(1000);
}
  
  
  
  



