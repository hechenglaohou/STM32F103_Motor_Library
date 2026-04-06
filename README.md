# STM32McpwmMotor
STM32 直流电机驱动库（兼容 L298N / TB6612 / A4950）

## 介绍
基于 Arduino 框架，适用于 STM32F103 系列  
双路方向控制 + PWM 调速  
用法与 ESP32McpwmMotor 完全一致

## 用法
```cpp
#include <STM32McpwmMotor.h>
STM32McpwmMotor motor(PA0, PA1, PA2);

void setup(){
}
void loop(){
    motor.driveMotor(150);   // 正转
    motor.driveMotor(-150);  // 反转
    motor.stopMotor();       // 停止
}
