void setup() {
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  pinMode(10,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(10)==HIGH)
{
  digitalWrite(11,HIGH);
}
else
{digitalWrite(11,LOW);
}
}
