#ifndef STM32McpwmMotor_h
#define STM32McpwmMotor_h

#include "Arduino.h"

class STM32McpwmMotor {
private:
    uint8_t _pinIN1;
    uint8_t _pinIN2;
    uint8_t _pinPWM;

public:
    STM32McpwmMotor(uint8_t pinIN1, uint8_t pinIN2, uint8_t pinPWM);
    void driveMotor(int speed);
    void stopMotor();
};

#endif

