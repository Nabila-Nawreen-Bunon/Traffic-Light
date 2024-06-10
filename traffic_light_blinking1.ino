// C++ code
//
int r=13,b=12,g=8;
void setup()
{
 pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}

void loop()
{
 traffic();
  delay(1000);
}
void traffic(){
  digitalWrite(r,HIGH);
  delay(200);
  digitalWrite(r,LOW);
  delay(200);
  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  delay(200);
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  delay(200);
  digitalWrite(g,HIGH);
  delay(200);
  digitalWrite(g,LOW);
  delay(200);
}