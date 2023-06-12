#include <Arduino.h>
#include <math.h> // Other C++ libraries except STL can be included in adruino platform
#include <ctype.h>


String myOldString;
String myString;
String ctr = "Please enter the LED you want to blink: ";
String ctr2 = "Please enter string not other data: ";
int redPin = 11;
int greenPin = 10;
int yellowPin = 9;
void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  Serial.begin(9600);
}

// Convert User's input to lowercase
String toLower(String str) {
  String tmp ="";
  for(int i = 0; (unsigned) i < str.length(); i++) {
    if(islower(str.charAt(i))) {
      tmp += str[i];
      continue;
    }
    else if(isupper(str.charAt(i))) {
      char x = toLowerCase(str[i]);
      tmp += x;
    }
  }
  return tmp;
}

void loop() {
  Serial.print(ctr);
  while(Serial.available() == 0) {

  }
  myOldString = Serial.readString(); // get String from the serial monitor
  myString = toLower(myOldString);
  Serial.println(myString);
  Serial.println();
  while(myString != "red" && myString != "green" && myString != "yellow") {
    Serial.println();
    Serial.print(ctr2);
    while(Serial.available() == 0) {

    }
    myOldString = Serial.readString();
    myString = toLower(myOldString);
  }

  if(myString == "red") {
    analogWrite(redPin, 255);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 0);
  }
  else if(myString == "green") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 255);
    analogWrite(yellowPin, 0);
  }
  else if(myString == "yellow") {
    analogWrite(redPin, 0);
    analogWrite(greenPin, 0);
    analogWrite(yellowPin, 255);
  }
  Serial.println();
}