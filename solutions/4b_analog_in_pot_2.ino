/*
 Arduino Analog Input with Potentiometer 2
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: map()
*/

// potentiometer connected to analog input 0
const int analogSensorPin = A0;

// store the previously read value
int previousReading = 0;

void setup() {
  // initialize serial communication at 9600 bps
  Serial.begin(9600);
}

void loop() {
  // read the value of the potentiometer
  int reading = map(analogRead(analogSensorPin), 0, 1023, 0, 10);

  // check to see if the reading has changed
  if (reading != previousReading) {
    // print the read value
    Serial.println(reading);
  }

  // store the previous reading
  previousReading = reading;
}
