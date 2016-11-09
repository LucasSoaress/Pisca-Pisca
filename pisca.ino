int leds[]{2,3,4,5};

void setup() 
{
  for(int i = 0; i < 4; i++)
  {
    pinMode(leds[i],OUTPUT);
  }
}

void loop() 
{
  for(int i = 0; i < 10; i++)
  {
    AcenderApagar(0,1);
  }

  for(int i = 0; i < 10; i++)
  {
    AcenderApagar(2,3);
  }
}

void AcenderApagar(int led1, int led2)
{
  digitalWrite(leds[led1],HIGH);
  digitalWrite(leds[led2],HIGH);
  delay(300);
  digitalWrite(leds[led1],LOW);
  digitalWrite(leds[led2],LOW);
  delay(300);
}
