/*
 *
 * Authors: Jeffrey Leung, Charles Li
 * Last edited: 2016-02-29
 *
 * This Arduino sketch activates a laser for a short time and plays a laser
 * sound when a presssure pad is activated.
 *
 */

const unsigned int pinAnalogIn = A0;
const unsigned int pinPressure = 9;
const unsigned int pinLaser = 8;

// This method returns true if the value from the analog pin is greater than
// the threshold, and false otherwise.
bool inputGreaterThan(unsigned int analogPin, unsigned int threshold)
{
  return analogRead(analogPin) > threshold;
}

void setup() {
  pinMode(pinPressure, INPUT);
  pinMode(pinLaser, OUTPUT);

  digitalWrite(pinPressure, HIGH);
  digitalWrite(pinLaser, LOW);
}

void loop() {

}
