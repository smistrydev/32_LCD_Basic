#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Start");
}

void loop()
{
  Serial.println("ON");
  delay(500);                     // wait for a second
  Serial.println("OFF");
  delay(500); // wait for a second
}