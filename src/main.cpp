#include <Arduino.h>
#define pin 13

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Display first O
  for(int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
  // S
  for(int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(2000);
    digitalWrite(pin, LOW);
    delay(500);
  }

  for(int i = 0; i < 3; i++) {
    digitalWrite(pin, HIGH);
    delay(500);
    digitalWrite(pin, LOW);
    delay(500);
  }
  delay(5000);
}

