/*
 Arduino Blink
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: digitalWrite()
*/

// led will be connected to pin 13
const int ledPin = 13;

void setup() {
  // assign the led pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // turn the led on by making the pin voltage HIGH
  digitalWrite(ledPin, HIGH);

  // wait for 1000 milliseconds (1 second)
  delay(1000);

  // turn off the led by making the pin voltage LOW
  digitalWrite(ledPin, LOW);

  // wait again
  delay(1000);

  // the loop will now continue again from the beginning
}
