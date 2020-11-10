//two blinking led
int led1 = 2; int led2 = 3; 
void setup() {
  // put your setup code here, to run once:
  pinMode(led1,OUTPUT);    
  pinMode(led2,OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led1,HIGH);    
delay(50);                   
digitalWrite(led1,LOW);   
digitalWrite(led2,HIGH);   
delay(50); 
digitalWrite(led2,LOW); 
}
