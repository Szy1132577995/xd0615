int i=0;
void setup()
{
  for(i=0;i<8;i++)
  {   
       pinMode(i, OUTPUT);
  }
  
 }

void loop()
{
  for(i=0;i<8;i++)
  {
  digitalWrite(i, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)alWrite(i, HIGH);
  }
  for(i=7;i>=0;i--)
  {
  digitalWrite(i, LOW);
  delay(1000); // Wait for 1000 millisecond(s)alWrite(i, HIGH);
  }
}