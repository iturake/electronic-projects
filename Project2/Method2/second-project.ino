#define shiftLeft (PORTD << 1)
bool buttonState = 0;
byte LED = B00010000;

void setup()
{
  	DDRD = B11110000;
  	PORTD = B00000000;
}

void loop()
{
  if(((PIND & B00001000) == 8) && !buttonState) {
    buttonState = 1;
    PORTD = PORTD ^ LED;
    LED = (LED << 1);
    if(PORTD == B11110000) {
      	LED = B00010000;
    } else if (PORTD == B00000000) {
    	LED = B00010000;
    }
  } else if ((PIND & B00001000) == 0) {
  	buttonState = 0;
  }
}

//source: https://www.arduino.cc/en/Reference/PortManipulation