/*
 Arduino Blink via Button Toggle
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: conditionals

 Note: Notice that this code only partially works,
 we will fix it using debouncing in the next lesson.
*/

// push button switch will be connected to pin 2
const int buttonPin = 2;

// led will be connected to pin 13
const int ledPin = 13;

// variable to track led state
int ledState = LOW;

void setup() {
  // assign the button pin as an INPUT
  pinMode(buttonPin, INPUT);

  // assign the led pin as an OUTPUT
  pinMode(ledPin, OUTPUT);

  // set the initial led state
  digitalWrite(ledPin, ledState);
}

void loop() {
  // read the state of the button (0 or 1)
  int buttonState = digitalRead(buttonPin);

  if (buttonState) {
    // button is pressed, invert the led state variable
    ledState = !ledState;
  }

  // update the led pin output based on the led state variable
  digitalWrite(ledPin, ledState);

  // brief delay
  delay(200);
}
