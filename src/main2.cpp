#include <Arduino.h>
#include <math.h> // Other C++ libraries except STL can be included in adruino platform
#include <ctype.h>
// void setup() {
//   // put your setup code here, to run once:
//   pinMode(pin, OUTPUT);
//   pinMode(pin2, OUTPUT);
//   pinMode(pin3, OUTPUT);
//   pinMode(pin4, OUTPUT);
// }

// void loop() {
//   // put your main code here, to run repeatedly:
  
  
//   //From 2
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 3
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 4
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 5
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 6
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 7
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 8
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 9
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 10
//   digitalWrite(pin, LOW);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 11
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, LOW);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 12
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 13
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, LOW);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
//   //From 14
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, LOW);
//   delay(2000);
//   //From 15
//   digitalWrite(pin, HIGH);
//   digitalWrite(pin2, HIGH);
//   digitalWrite(pin3, HIGH);
//   digitalWrite(pin4, HIGH);
//   delay(2000);
// }

/*Analog Write: used to specify the specific value of voltage modified by the adruino to the pin
Upgrading the LED's light from Low to medium to High light. each states delay for 2 seconds
PWM: Dai luong Demonstrate the ratio of 2 states On and OFF due to time and based on that, analogWrite() can controll the voltage of the sources
If value of analog is 125, it means the LED light half the time and off half the time
  Research:
  PWM mean: https://www.reddit.com/r/arduino/comments/p5a4oe/why_is_pwm_between_0_and_255_and_what_does_it/
  value place system*/

// #define pinRED 11
// void setup() {
//     pinMode(pinRED, OUTPUT);
// }

// void loop() {
//     analogWrite(pinRED, 0); // 0V
//     delay(2000);
//     analogWrite(pinRED, 10); // due to the pwm, it is 4% of the adruino PWM = 0.2 V
//     // Display on the olliscope, it lights 4 times and off 100 times
//     delay(2000);
//     analogWrite(pinRED, 255); // 5V
//     delay(1000);
// }

/*Analog read used to read the voltage incoming to a pin
V is real voltage and V = (5/1023) * readVal
=> To find real voltage first read the value of analog then multiply the const*/

// float V = 0.0;
// int readVal = 0;
// void setup() {
//     pinMode(pin, INPUT);
//     Serial.begin(9600); // Set up the serial monitor where we can we put to it 
// }
// void loop() {
//     readVal = analogRead(pin); // Read V from pin A4
//     V = (5.0/1023.0) * readVal;
//     Serial.println(V); // print V to the serial monitor
//     delay(500);
// }

/*Understand how computer communicate adruino throu serial monitor
It is used like printf in C/C++*/
// int j;
// String myString = "j = ";
// int power(int j) {
//   return j = pow(2, 2); // if set function to void, the j is jusht changed locally
// }
// void setup() {
//   Serial.begin(9600); // Set up the serial monitor
  
//   j = 1;
// }

// void loop() {
//   Serial.print(myString); // Serial can print string
//   j = power(j);
//   Serial.println(j);
//   delay(1000);

//   j++;
// }

/*Understanding potentiometer: resistor variable that can change the resistance
*/
// int pin = A4;
// float Vout = 0.0;
// int readVal = 0;
// void setup() {
//   pinMode(A4, INPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   readVal = analogRead(pin);
//   Vout = (5.0/1023.0) * readVal; // convert read value into voltage
//   Serial.println(Vout); 
//   delay(500);
// }

/*Create warning message when overloading an electrical device*/
// int redPin = 11;
// int yellowPin = 5;
// int greenPin = 6;
// int readPin = A1;
// int readVal = 0;
// float Vout = 0.0;
// int rate = 9600;
// int delayVal = 500;
// void setup() {
//   pinMode(redPin, OUTPUT);
//   pinMode(yellowPin, OUTPUT);
//   pinMode(greenPin, OUTPUT);
//   pinMode(readPin, INPUT);
//   Serial.begin(rate);
// }

// void loop() {
//   readVal = analogRead(readPin); // Read the value from the pin

//   // Calculate the actual voltage
//   Vout = (5./1023.) * readVal;
//   Serial.println(Vout);
//   delay(delayVal);

//   // Alert the LED when the voltage above 3V
//   if(Vout < 2.0) { // for red one 
//     analogWrite(redPin, 255);
//     analogWrite(greenPin, 0);
//     analogWrite(yellowPin, 0);
//   }
//   else if (Vout > 2.0 && Vout < 3.0) { // for green
//     analogWrite(redPin, 0);
//     analogWrite(greenPin, 255);
//     analogWrite(yellowPin, 0);
//   }
//   else if(Vout > 3.0) { // for yellow
//     analogWrite(redPin, 0);
//     analogWrite(greenPin, 0);
//     analogWrite(yellowPin, 255);
//   }
// }

/*Reading numbers from serial monitor
 Serial number: Communication method between diffrerent devices
 Here we learn how to get user input from serial monitor
 - In Arduino programming, Serial is used to communicate with the computer or other devices. The Serial library allows the communication between the Arduino board and a computer or other devices. The communication occurs through digital pins 0 (RX) and 1 (TX) of the board. The Serial.begin() function initializes the serial communication with a specified baud rate. The Serial.print() function sends data to the serial port as human-readable ASCII text. The Serial.write() function sends binary data to the serial port12.
 - A serial port is a communication interface that transfers information sequentially one bit at a time. It is used to connect devices that use serial communication, such as modems, terminals, peripherals, and computers. Serial ports are slower than other interfaces but are still used in applications that demand simple, low-speed interfaces, such as industrial automation systems, scientific instruments, and point of sale systems. The term “serial port” usually refers to hardware compliant with RS-232 or a related standard, such as RS-485 or RS-422. Modern consumer personal computers have largely replaced serial ports with higher-speed standards, primarily USB. However, serial ports are still frequently used in some industrial and consumer products1.
 */

// int myNumber;
// int delayTime = 500;
// int port11 = 11;
// String msg = "How many times do you want to blink the LED";

// void setup() {
//   pinMode(port11, OUTPUT);
//   Serial.begin(9600);
// }

// void loop() {
//   Serial.println(msg);
//   // Because the computer is so fast that can not give users time to input 
//   // so we let the user time to input by while condition
//   while(Serial.available() == 0) { // if the number is not sent to serial port
//     // this is used to create a delay for user to input
//   }
  
//   myNumber = Serial.parseInt(); // Once the data is sent to serial port, it will be parsed into var
//   // Get the number of time you want the LED blink
//   for(int i = 0; i < myNumber; i++) { // Blink the LED follow the input
//     analogWrite(port11, 255);
//     delay(delayTime);
//     analogWrite(port11, 0);
//     delay(delayTime);
//   }
//   Serial.print("Your number is ");
//   Serial.println(myNumber);
// }

/*Read String from Serial Monitor*/

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