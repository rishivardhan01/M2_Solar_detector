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
#include<stdio.h>
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
 * @brief Measuring the distance
 * @return Getting Input values
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