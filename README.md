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

### 📜 开源声明 & 第三方组件版权说明
1.  本项目**自定义业务源码**基于 **Apache 2.0** 协议开源，仅用于个人学习、嵌入式机器人技术研究。
2.  项目依赖所有第三方开源组件版权归原作者所有：
3.  所有底层库、官方固件仅作为开发依赖调用，未修改原生版权声明，不用于任何商业盈利行为。
4.  禁止将本项目全部/部分源码用于未经授权的商业售卖、产品商用。
5.  开源来源声明
   本项目底层基础框架来源于 **鱼香ROS** 开源项目，基于 **MIT 协议**二次开发。
