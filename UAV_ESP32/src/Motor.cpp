#include <Motor.h>

#define ZERO (0UL)

static Servo Motor_1;
static Servo Motor_2;
static Servo Motor_3;
static Servo Motor_4;

void Motor_Stop(void)
{
    Motor_1.write(ZERO);
    Motor_2.write(ZERO);
    Motor_3.write(ZERO);
    Motor_4.write(ZERO);
}

void Motor_Init(void)
{
    Motor_1.attach(ESC_1_PIN, PPM_MIN, PPM_MAX);
    Motor_2.attach(ESC_2_PIN, PPM_MIN, PPM_MAX);
    Motor_3.attach(ESC_3_PIN, PPM_MIN, PPM_MAX);
    Motor_4.attach(ESC_4_PIN, PPM_MIN, PPM_MAX);
    Motor_Stop();
}

void Motor_SetSpeed(Motor_typedef Motor, uint8_t Speed)
{
    if(Motor == MOTOR_1)
    {
        if(Speed <= ZERO)
        {
            Motor_1.write(ZERO);
        }
        else if (Speed >= PPM_MAX)
        {
            Motor_1.write(MOTOR_1_MAX);
        }
        else
        {
            Motor_1.write(Speed);
        }
    }
    else if (Motor == MOTOR_2)
    {
        if(Speed <= ZERO)
        {
            Motor_2.write(ZERO);
        }
        else if (Speed >= PPM_MAX)
        {
            Motor_2.write(MOTOR_2_MAX);
        }
        else
        {
            Motor_2.write(Speed);
        }
    }
    else if (Motor == MOTOR_3)
    {
        if(Speed <= ZERO)
        {
            Motor_3.write(ZERO);
        }
        else if (Speed >= PPM_MAX)
        {
            Motor_3.write(MOTOR_3_MAX);
        }
        else
        {
            Motor_3.write(Speed);
        }
    }
    else if (Motor == MOTOR_4)
    {
        if(Speed <= ZERO)
        {
            Motor_4.write(ZERO);
        }
        else if (Speed >= PPM_MAX)
        {
            Motor_4.write(MOTOR_4_MAX);
        }
        else
        {
            Motor_4.write(Speed);
        }
    }
    else if (Motor == ALL_Motors)
    {
        if(Speed <= ZERO)
        {
            Motor_1.write(ZERO);
            Motor_2.write(ZERO);
            Motor_3.write(ZERO);
            Motor_4.write(ZERO);
        }
        else if (Speed >= PPM_MAX)
        {
            Motor_1.write(MOTOR_1_MAX);
            Motor_2.write(MOTOR_2_MAX);
            Motor_3.write(MOTOR_3_MAX);
            Motor_4.write(MOTOR_4_MAX);
        }
        else
        {
            Motor_1.write(Speed);
            Motor_2.write(Speed);
            Motor_3.write(Speed);
            Motor_4.write(Speed);
        }
    }
    else 
    {
       Motor_Stop();
    }
}

