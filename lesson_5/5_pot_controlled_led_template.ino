/*
 Arduino Potentiometer Controlled LED
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: analogWrite()
*/

// potentiometer connected to analog input 0
// todo

// led connected to pin 3 (PWM capable)
// todo

void setup() {
  // initialize serial communication at 9600 bps
  // todo

  // set the led pin as an output
  // todo
}

void loop() {
  // read the value of the potentiometer
  // todo

  // analog read goes from 0 to 1023, analog write goes from 0 to 255
  // write the read value mapped to the proper scale
  // todo

  // print the read value
  // todo

  // keep the output from scrolling too fast
  delay(500);
}
