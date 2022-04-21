/**
 * @file project_main.c
 * @author RISHIVARDHAN T R (rishivardhan.tr.2018.ece@ritchennai.edu.in)
 * @brief Header file for Solar_Detector are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <Servo.h>

int sensorPin = A0;
int servoPin  = 9;

int sensorValue = 0;
int servoGrad = 90;
int tolerance = 40;

Servo myservo;

void main()
{
void setup();
void loop();
}
