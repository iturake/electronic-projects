int state;

void setup()
{
  	DDRD = B11110000;
  	PORTD = B00010000;
}

void loop()
{
  if(PORTD == B10000000) {
    state = 1;
  } else if (PORTD == B00010000){
	state = 0;
  }
  
  if(!state) {
  	PORTD = PORTD << 1;
    delay(500);
  } else {
	PORTD = PORTD >> 1;
    delay(500);
  }
}

//source: https://www.arduino.cc/en/Reference/PortManipulation