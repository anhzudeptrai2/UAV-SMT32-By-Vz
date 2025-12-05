#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>
#include <EEPROM.h>
#include <Wire.h>
#include <SPI.h>
#include <Servo.h>
#include <GlobalVariable.h>
typedef enum {
    ALL_Motors,
    MOTOR_1,
    MOTOR_2,
    MOTOR_3,
    MOTOR_4
}Motor_typedef;  

typedef struct 
{
    uint8_t Motor_1;
    uint8_t Motor_2;
    uint8_t Motor_3;
    uint8_t Motor_4;
}Motor_Speed_typedef;

void Motor_Init(void);
void Motor_Stop(void);
void Motor_SetSpeed(Motor_typedef Motor, uint8_t Speed);
void Motor_SetAllSpeed(uint8_t Speed);

#endif

