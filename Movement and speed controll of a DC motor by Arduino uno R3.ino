// C++ code
//clockwise means positive
//Anticlockwise means negative
int red=11;
int black=10;
void setup()
{
  pinMode(red,OUTPUT);
  pinMode(black,OUTPUT);
}

void loop()
{
  //clockwisemovement();//5 volt
  //anticlockwisemovement();//5 volt
  bothmovement();//5 volt
  //clockwisespeedcontroll();//2.35 volt
  //anticlockwisespeedcontroll();//2.35 volt
  bothspeedcontroll();//clock and anticlock
}

void clockwisemovement()//5 volt
{
  digitalWrite(red,HIGH);//High means 5 volt/255
  digitalWrite(black,LOW);//Low means 0 volt/0
}

void anticlockwisemovement()//5 volt
{
   digitalWrite(red,LOW);
  digitalWrite(black,HIGH);
}

void bothmovement()//5 volt
{
  digitalWrite(red,HIGH);//High means 5 volt/255
  digitalWrite(black,LOW);//Low means 0 volt/0
  delay(2000);
  digitalWrite(red,LOW);
  digitalWrite(black,HIGH);
  delay(2000);
}
void clockwisespeedcontroll()//2.35 volt
{
  
  analogWrite(red,120);//120 means (5*120)/255=2.35 volt
  analogWrite(black,0);//0 means 0 volt
}
void anticlockwisespeedcontroll()//2.35 volt
{
  analogWrite(red,0);
  analogWrite(black,120);
}
void bothspeedcontroll()//clock and anticlock
{
  analogWrite(red,120);//120 means (5*120)/255=2.35 volt
  analogWrite(black,0);//0 means 0 volt
  delay(2000);
  analogWrite(red,0);
  analogWrite(black,120);
  delay(2000);
}
  