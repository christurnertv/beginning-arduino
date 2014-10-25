/*
 Arduino Blink with Serial Monitoring
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License

 Concepts Taught: serial monitoring
*/

// led will be connected to pin 13
const int ledPin = 13;

void setup() {
  // initialize serial communication at 9600 bps
  // todo

  // assign the led pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the led on by making the pin voltage HIGH
  digitalWrite(ledPin, HIGH);

  // send a serial message describing the led state
  // todo

  // wait for 1000 milliseconds (1 second)
  delay(1000);

  // turn off the led by making the pin voltage LOW
  digitalWrite(ledPin, LOW);

  // send a serial message describing the led state
  // todo

  // wait again
  delay(1000);

  // the loop will now continue again from the beginning
}
