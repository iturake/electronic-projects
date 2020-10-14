const byte buttonPin = 8;
const byte ledPins[4] = {4,5,6,7};
byte buttonCount = 0;
bool buttonState = true;

void setup()
{
  pinMode(buttonPin, INPUT);
  for (byte i = 0; i < 4; i++)
  {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop()
{
  buttonControl();
  ledsControl();
}

void buttonControl()
{
  if(digitalRead(8) == HIGH)
  {
    delay(100);
    buttonCount ++;
    if(buttonCount > 4)
    {
      buttonCount = 1;
      buttonState = !buttonState;
    }
  }
}

void ledsControl()
{
  for(byte i = 0; i < 4; i++)
  {
    if(buttonCount == i+1)
    {  
      digitalWrite(ledPins[i], buttonState);
    }
  }
}
