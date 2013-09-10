/*
 Arduino Analog Input with Potentiometer
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: analogRead()
*/

// potentiometer connected to analog input 0
const int analogSensorPin = A0;

void setup() {
  // initialize serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // read the value of the potentiometer
  int reading = analogRead(analogSensorPin);

  // print the read value. what do you expect to see?
  Serial.println(reading);

  // keep the output from scrolling too fast
  delay(500);
}
