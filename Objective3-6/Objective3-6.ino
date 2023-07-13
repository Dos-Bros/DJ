#include "DeviceDriverSet_Movement.h"
#include "DeviceDriverSet_Ultrasonic.h"
#include "DeviceDriverSet_Servo.h"
#include "ApplicationFunctionSet_Movement.cpp"
  DeviceDriverSet_Motor AppMotor;
  DeviceDriverSet_ULTRASONIC AppUltrasonic;
  DeviceDriverSet_Servo AppServo;
  int distance; 
  int d1;
  int d2;
  int d3;
  int trn = 350;
void setup() {
  
 AppMotor.setupMotor();
 AppServo.setupServo(100);
 AppUltrasonic.setupUltrasonic();
 AppUltrasonic.getDistance(distance);

}
//moveRobot(forward)
//delay(100)
int ran = random(1,2);
int check(){
  ran = random(1,2);
if(ran = 1){
  AppServo.setupServo(0);
  AppUltrasonic.getDistance(&d1);
  AppServo.setupServo(100);
  AppUltrasonic.getDistance(&d2);
  AppServo.setupServo(200);
  AppUltrasonic.getDistance(&d3);
}else{
  AppServo.setupServo(200);
  AppUltrasonic.getDistance(&d3);
  AppServo.setupServo(100);
  AppUltrasonic.getDistance(&d2);
  AppServo.setupServo(0);
  AppUltrasonic.getDistance(&d1);
}

}
void loop(){
moveRobot(forward);
check();
if (d1>d2&&d1>d3){
  moveRobot(left);
  delay(trn);
  AppServo.setupServo(100);
}
if (d2>d1&&d2>d3){
  moveRobot(forward);
  delay(25);
  AppServo.setupServo(100);
  check();
}
if (d3>d1&&d3>d2){
  moveRobot(right);
  delay(trn);
  AppServo.setupServo(100);
}
}
