const byte ledPins[4] = {4, 5, 6, 7};

void setup()
{
  for (byte i = 0; i < 4; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  ledControl();
}

void ledControl()
{
  for (byte i = 0; i < 4; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
  }
}
