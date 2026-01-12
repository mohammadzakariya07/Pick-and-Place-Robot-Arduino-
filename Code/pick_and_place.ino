#include <Servo.h>

#define NUM_SERVOS 5   // Total number of servos

// Servo objects
Servo servos[NUM_SERVOS];

// Potentiometer pins
int potPins[NUM_SERVOS] = {A0, A1, A2, A3, A4};

// Servo PWM pins
int servoPins[NUM_SERVOS] = {3, 5, 6, 9, 11};

void setup() {
  for (int i = 0; i < NUM_SERVOS; i++) {
    servos[i].attach(servoPins[i]);   // Attach each servo
  }
}

void loop() {
  for (int i = 0; i < NUM_SERVOS; i++) {
    int potValue = analogRead(potPins[i]);      // Read potentiometer (0–1023)
    int angle = map(potValue, 0, 1023, 0, 180); // Map to servo angle
    servos[i].write(angle);                     // Move servo
  }
  delay(10); // Small delay to reduce jitter
}
