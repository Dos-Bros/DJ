
#include "Servo.h"

const int trigPin = 12;
const int echoPin = 13;
 long duration;
 int distance;
 int spin;
 int d1;
 int d2;
 int d3;
 int d4;
 int d5;
void setup() {
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,INPUT);
Serial.begin(9600);
servoMotor = 0;
 int d1 = 0;
 int d2 = 0;
 int d3 = 0;
 int d4 = 0;
 check()
}
void radar(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration + pulseIn(echoPin, HIGH);
  distance = duration * 0.032 / 2;
  }
 void check(){
  servoMotor = 90;
  radar()
  distance = d1;
  servoMotor = 45;
  radar()
  distance = d2;
  servoMotor = 0;
  radar()
  distance = d1;
  servoMotor = -45;
  radar()
  distance = d3;
  servoMotor = -90;
  radar()
  distance = d4;
  }

void loop() {
  
}
