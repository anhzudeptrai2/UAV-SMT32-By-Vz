#ifndef GLOBALVARIABLE_H
#define GLOBALVARIABLE_H

#include <Arduino.h>
#include <EEPROM.h>
#include <Wire.h>
#include <SPI.h>
#include <Servo.h>
// #include "SimpleKalmanFilter.h"
// #include "U8g2lib.h"
// #include "I2Cdev.h"
// #include "MPU6050_6Axis_MotionApps20.h"

// -------------------- Hardware Pin Map --------------------

#define ESC_1_PIN 3 
#define ESC_2_PIN 5
#define ESC_3_PIN 6 
#define ESC_4_PIN 9 

#define BATT_VOLT_PIN A0


static const uint8_t MOTOR_PINS[4] = {ESC_1_PIN, ESC_2_PIN, ESC_3_PIN, ESC_4_PIN};

// -------------------- General Definitions --------------------

// -------------------- PPM value --------------------
#define PPM_MIN (1000)
#define PPM_MAX (2000)
#define PPM_MID (1500)
// -------------------- Motor value define --------------------

#define MOTOR_1_MAX (180)
#define MOTOR_2_MAX (180)
#define MOTOR_3_MAX (180)
#define MOTOR_4_MAX (180)

#define MOTOR_1_MIN (0)
#define MOTOR_2_MIN (0) 
#define MOTOR_3_MIN (0)
#define MOTOR_4_MIN (0)

#endif