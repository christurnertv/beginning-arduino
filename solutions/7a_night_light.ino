/*
 Arduino Night Light
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License
*/

// photo resistor connected to analog input 0
const int analogSensorPin = A0;

// led connected to pin 3 (PWM capable)
const int ledPin = 3;

void setup() {
  // initialize serial communication at 9600 bps
  Serial.begin(9600);

  // set the led pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value of the photo resistor
  int reading = analogRead(analogSensorPin);

  // try out the photo resistor to see the output range
  // write the read value mapped to the proper scale
  analogWrite(ledPin, map(reading, 200, 1023, 50, 0));

  // print the read value
  Serial.println(reading);

  // keep the output from scrolling too fast
  delay(500);
}
