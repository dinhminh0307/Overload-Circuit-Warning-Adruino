#include <Arduino.h>
#include <math.h> // Other C++ libraries except STL can be included in adruino platform
#include <ctype.h>


int redPin = 11;
int yellowPin = 5;
int greenPin = 6;
int readPin = A1;
int readVal = 0;
float Vout = 0.0;
int rate = 9600;
int delayVal = 500;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(readPin, INPUT);
  Serial.begin(rate);
}

void loop() {
  readVal = analogRead(readPin); // Read the value from the pin

  // Calculate the actual voltage
  Vout = (5./1023.) * readVal;
  Serial.println(Vout);
  delay(delayVal);

  // Alert the LED when the voltage above 3V
  if(Vout < 2.0) { // for red one 
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 0);
  }
  else if (Vout > 2.0 && Vout < 3.0) { // for green
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(yellowPin, 0);
  }
  else if(Vout > 3.0) { // for yellow
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 255);
  }
}