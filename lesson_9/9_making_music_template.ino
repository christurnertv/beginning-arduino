/*
 Arduino Making Music
 Copyright (C) 2013-2014 Turner Logic, LLC
 Released under MIT License

 Code based on example from:
 http://arduino.cc/en/Tutorial/Tone
*/

// define note pitches
#define NOTE_C4 262
#define NOTE_D4 294
#define NOTE_E4 330
#define NOTE_G4 392

// array holding the melody sequence
int melody[] = { NOTE_C4, NOTE_D4, NOTE_E4, NOTE_G4, NOTE_E4, NOTE_G4 };

// array holding the note durations for the melody sequence
int noteDurations[] = { 8, 8, 8, 4, 8, 4 };

// buzzer connected to pin 2
// todo

void setup() {
  // iterate over the notes in the melody array using a for loop
  // todo

    // calcluate note duration in milliseconds
    // todo int noteDuration = 

    // play the tone
    // todo

    // add a delay between notes relative to note duration
    delay(noteDuration * 1.30);

    // stop playing the tone
    // todo
  }
}

void loop() {
  // don't repeat the melody
}
