/*
 Arduino Night Light 2
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License
*/

// photo resistor connected to analog input 0
const int analogSensorPin = A0;

// led connected to pin 3
const int ledPin = 3;

// analog light level threshold
const int threshold = 550;

void setup() {
  // initialize serial communication at 9600 bps
  Serial.begin(9600);

  // set the led pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value of the photo resistor
  int reading = analogRead(analogSensorPin);

  if (reading < threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  // print the read value
  Serial.println(reading);

  // keep the output from scrolling too fast
  delay(500);
}
