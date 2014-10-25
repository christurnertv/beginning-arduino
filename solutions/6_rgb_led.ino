/*
 Arduino RGB LED
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License

 Concepts Taught: functions
*/

// rgb led connections
// red, green, blue = pins 11, 10, 9 respectively
const int redLedPin = 11;
const int greenLedPin = 10;
const int blueLedPin = 9;
 
void setup()
{
  // setup the led pins as OUTPUT
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(blueLedPin, OUTPUT);  
}
 
void loop()
{
  // call the red color function and then delay
  colorRed();  
  delay(1000);
  
  // call the green color function and then delay
  colorGreen();
  delay(1000);
  
  // call the blue color function and then delay
  colorBlue();
  delay(1000);
}

// add your color functions here
void colorRed() {
  setLedColor(255, 0, 0);
}

void colorGreen() {
  setLedColor(0, 255, 0);
}

void colorBlue() {
  setLedColor(0, 0, 255);
}

// function to set the led color based on the passed in rgb value
void setLedColor(int red, int green, int blue) {
  analogWrite(redLedPin, red);
  analogWrite(greenLedPin, green);
  analogWrite(blueLedPin, blue);  
}
