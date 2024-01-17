#include <Arduino.h>

// put function declarations here:

void setup()
{
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Hi, we are in The Setup");
  delay(2000);
}

void loop()
{
  Serial.println("Hi, we are in the Loop");

  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));

  delay(500);
}

// put function definitions here: