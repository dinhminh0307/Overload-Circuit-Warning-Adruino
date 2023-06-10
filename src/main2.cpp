#include <Arduino.h>
#include <math.h> // Other C++ libraries except STL can be included in adruino platform


/*Create warning message when overloading an electrical device*/
int redPin = 11;
int readPin = A1;
int readVal = 0;
float Vout = 0.0;
int rate = 9600;
int delayVal = 500;
void setup() {
  pinMode(redPin, OUTPUT);
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
  if(Vout > 3.0) {
    analogWrite(redPin, 255);
  }
  else {
    analogWrite(redPin, 0);
  }
}