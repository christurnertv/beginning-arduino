/*
 Arduino Potentiometer Controlled LED
 Copyright (C) 2013 Gizmovation, LLC
 Released under MIT License

 Concepts Taught: analogWrite()
*/

// potentiometer connected to analog input 0
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
  // read the value of the potentiometer
  int reading = analogRead(analogSensorPin);

  // analog read goes from 0 to 1023, analog write goes from 0 to 255
  // write the read value mapped to the proper scale
  analogWrite(ledPin, reading / 4);

  // print the read value
  Serial.println(reading);

  // keep the output from scrolling too fast
  delay(500);
}
