#include "STM32McpwmMotor.h"

STM32McpwmMotor::STM32McpwmMotor(uint8_t pinIN1, uint8_t pinIN2, uint8_t pinPWM) {
    _pinIN1 = pinIN1;
    _pinIN2 = pinIN2;
    _pinPWM = pinPWM;

    pinMode(_pinIN1, OUTPUT);
    pinMode(_pinIN2, OUTPUT);
    pinMode(_pinPWM, OUTPUT);
}

void STM32McpwmMotor::driveMotor(int speed) {
    if (speed > 0) {
        digitalWrite(_pinIN1, HIGH);
        digitalWrite(_pinIN2, LOW);
        analogWrite(_pinPWM, constrain(speed, 0, 255));
    } 
    else if (speed < 0) {
        digitalWrite(_pinIN1, LOW);
        digitalWrite(_pinIN2, HIGH);
        analogWrite(_pinPWM, constrain(-speed, 0, 255));
    } 
    else {
        digitalWrite(_pinIN1, LOW);
        digitalWrite(_pinIN2, LOW);
        analogWrite(_pinPWM, 0);
    }
}

void STM32McpwmMotor::stopMotor() {
    driveMotor(0);
}

