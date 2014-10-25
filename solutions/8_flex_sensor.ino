/*
 Arduino Flex Sensor LED Indicator
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License

 Note: same code is used for thermistor and soft pot.
*/

// flex sensor connected to analog input 0
const int analogSensorPin = A0;

// red led connected to pin 2
const int redLedPin = 2;

// yellow led connected to pin 3
const int yellowLedPin = 3;

// threshold bend values
const int upThreshold = 260;
const int downThreshold = 170;

void setup() {
  // initialize serial communication at 9600 bps
  Serial.begin(9600);

  // set the led pins as outputs
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
}

void loop() {
  // read the value of the potentiometer
  int reading = analogRead(analogSensorPin);

  // if the reading is above the up threshold, turn on the red led
  if (reading > upThreshold) {
    digitalWrite(redLedPin, HIGH);
  } else {
    digitalWrite(redLedPin, LOW);
  }
  
  // if the reading is below the down threshold, turn on the yellow led
  if (reading < downThreshold) {
    digitalWrite(yellowLedPin, HIGH);
  } else {
    digitalWrite(yellowLedPin, LOW);
  }
  
  // print the read value
  Serial.println(reading);

  // keep the output from scrolling too fast
  delay(500);
}
