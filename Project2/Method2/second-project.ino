bool buttonState = 0;

void setup()
{
  	DDRD = B11110000;
  	PORTD = B00010000;
}

void loop()
{
  if(((PIND & B00001000) == 8) && !buttonState) {
    buttonState = 1;
    PORTD = PORTD << 1;
    if(PORTD == B00000000) {
    	PORTD = B00010000;
    }
  } else if ((PIND & B00001000) == 0) {
  	buttonState = 0;
  }
}

//source: https://www.arduino.cc/en/Reference/PortManipulation
