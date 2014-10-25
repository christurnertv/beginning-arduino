/*
 Arduino Blink via Button Toggle Debounced
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License

 Concepts Taught: millis() and debouncing

 Code based on example from:
 http://arduino.cc/en/Tutorial/Debounce
*/

// push button switch will be connected to pin 2
const int buttonPin = 2;

// led will be connected to pin 13
const int ledPin = 13;

// how long in ms the switch must be pressed to be official
const int minPressTime = 50;

// variable to track led state
int ledState = LOW;

// track the button state
int buttonState = LOW;

// track the previous button state
int lastButtonState = LOW;

// track the last time the button state changed
long lastStateChange = 0;

void setup() {
  // assign the button pin as an INPUT
  pinMode(buttonPin, INPUT);

  // assign the led pin as an OUTPUT
  pinMode(ledPin, OUTPUT);

  // set the initial led state
  digitalWrite(ledPin, ledState);
}

void loop() {
  // read the state of the button to a temporaray variable
  int tempReading = digitalRead(buttonPin);

  if (tempReading != lastButtonState) {
    // button state has changed, update the time tracker with the current millis value
    lastStateChange = millis();
  }

  // see if the last change detected was longer ago than the min press time
  if (millis() - lastStateChange > minPressTime) {
    
    // now check to see if the button state is different than the current reading
    if (tempReading != buttonState) {
      // officially update the button state
      buttonState = tempReading;
      
      if (buttonState) {
        // button is pressed, toggle the led
        ledState = !ledState;
      }
    }

  }

  // update the led output to match the current led state
  digitalWrite(ledPin, ledState);
  
  // store the last button state
  lastButtonState = tempReading;
}
