/**
 * @file Solar_detector_operation.h
 * @author RISHIVARDHAN T R (rishivardhan.tr.2018.ece@ritchennai.edu.in)
 * @brief Header file for Solar_Detector are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
/**
 * @brief Rotate of motor in praticular direction
 * @return Rotation of motor in specific angle
 */
#include <Servo.h>

int sensorPin = A0;
int servoPin  = 9;

int sensorValue = 0;
int servoGrad = 90;
int tolerance = 40;

Servo myservo;
/**
 * @brief Initialization of pins
 * @return Declaration
 */
void setup() {
  pinMode( sensorPin, INPUT);
  myservo.attach( servoPin );
  myservo.write( servoGrad );
}

/**
 * @brief Part of Execution
 * @return Execution
 */
void loop() {
   sensorValue = analogRead(sensorPin);
  if ( sensorValue < (512-tolerance) )
  {
    if (servoGrad < 180) servoGrad++;
  }

  if ( sensorValue > (512+tolerance) )
  {
    if (servoGrad > 0) servoGrad--;
  }

  myservo.write( servoGrad ); 

  delay(100);
}