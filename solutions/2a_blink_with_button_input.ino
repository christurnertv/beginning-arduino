/*
 Arduino Blink via Button Input
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: digitalRead()
*/

// push button switch will be connected to pin 2
const int buttonPin = 2;

// led will be connected to pin 13
const int ledPin = 13;

void setup() {
  // assign the button pin as an INPUT
  pinMode(buttonPin, INPUT);

  // assign the led pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the state of the button (0 or 1)
  int buttonState = digitalRead(buttonPin);

  // turn the led on or off based on the button state
  digitalWrite(ledPin, buttonState);

  // brief delay
  delay(10);
}
