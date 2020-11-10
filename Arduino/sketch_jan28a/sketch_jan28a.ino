int ledpin=13;  
int inpin=5;          
int val;      
void setup()  
{   pinMode(ledpin,OUTPUT);   
pinMode(inpin,INPUT);  
} 
void loop()  
{ 
  val=digitalRead(inpin);                   
if(val==HIGH)           
{   digitalWrite(ledpin,HIGH); } 
else {   digitalWrite(ledpin,LOW);                               
} } 
