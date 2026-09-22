#include <Arduino.h>

int Leds[5] = {2,3,4,5,6};

void setup()
{
  for(int i = 0 ; i < 5 ; i++)
  {
    pinMode(Leds[i],OUTPUT);
  }
}

void loop()
{
  int value = analogRead(A0);
  int x = map(value,0,1023,0,4);

  for(int i = 0 ; i < 5 ; i++)
  {
    digitalWrite(Leds[i], i <= x);
  }
}
