#include <Wire.h>
#include "rgb_lcd.h"

rgb_lcd lcd;

int start = 1;
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;
// defines pins numbers
const int trigPin = 12;
const int echoPin = 13;
// defines variables
long duration;
int distance;
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
Serial.begin(9600); // Starts the serial communication
  lcd.begin(16, 2);

    lcd.setRGB(colorR, colorG, colorB);

}
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
  if(distance <= 35){
  digitalWrite(9, HIGH);
  digitalWrite(10,HIGH);
  delay(20);
   digitalWrite(9, LOW);
  digitalWrite(10,LOW);
}
else{
  digitalWrite(8, HIGH);
digitalWrite(11, HIGH);
delay(20);
digitalWrite(8, LOW);
digitalWrite(11, LOW);
delay(20);
digitalWrite(9, HIGH);
digitalWrite(11, HIGH);
delay(75);
digitalWrite(9, LOW);
digitalWrite(11,LOW);

}



}


