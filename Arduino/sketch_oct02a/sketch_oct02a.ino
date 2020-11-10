void setup()
{
 Serial.begin(9600);

}
void loop()
{
  int ht=analogRead(13);
  Serial.print(ht);
  Serial.println("Humidity: ");
  Serial.print(" %");
  Serial.println("Temperature:");
  Serial.print("°C");
}
