/*
 Arduino Blink via Button Toggle Debounced
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: millis() and debouncing

 Code based on example from:
 http://arduino.cc/en/Tutorial/Debounce
*/

// push button switch will be connected to pin 2
// todo

// led will be connected to pin 13
// todo

// how long in ms the switch must be pressed to be official
// todo

// variable to track led state
// todo

// track the button state
// todo

// track the previous button state
// todo

// track the last time the button state changed
// todo

void setup() {
  // assign the button pin as an INPUT
  // todo

  // assign the led pin as an OUTPUT
  // todo

  // set the initial led state
  // todo
}

void loop() {
  // read the state of the button to a temporaray variable
  // todo

  // if button state has changed, update the time tracker with the current millis value
  // todo

  // see if the last change detected was longer ago than the min press time
  // todo
    
    // now check to see if the button state is different than the current reading
    // todo

      // officially update the button state
      // todo
      
      // if button is pressed, toggle the led
      // todo

  // update the led output to match the current led state
  // todo
  
  // store the last button state
  // todo
}
