# ESP32 Potentiometer → Servo Control

## 📌 Description

This project uses a potentiometer with an ESP32 to control the position of a servo motor.

The potentiometer provides an analog value, which is converted into a servo angle from 0° to 180°.

## 🛠️ Components

- ESP32 DevKit
- Potentiometer
- Servo Motor

## 🔌 Pin Connections

| Component | ESP32 Pin |
|---|---|
| Potentiometer Signal | GPIO 34 |
| Servo Signal | GPIO 18 |
| Potentiometer VCC | 3.3V |
| Potentiometer GND | GND |
| Servo VCC | 5V |
| Servo GND | GND |

## 🧠 Concepts Learned

- ESP32 ADC
- `analogRead()`
- `map()`
- Servo motor control
- `ESP32Servo` library
- Serial Monitor

## ⚙️ Working

The potentiometer is connected to GPIO 34, which is an ADC pin.

The ESP32 reads the potentiometer value:
0-4095

The servo then moves according to the potentiometer position.

Potentiometer
      ↓
 GPIO 34
      ↓
 analogRead()
      ↓
   0–4095
      ↓
    map()
      ↓
    0–180°
      ↓
    Servo

## 📚 ESP32Servo Library

The ESP32Servo library is used to control servo motors with ESP32.

It provides the Servo class and functions such as:

`#include <ESP32Servo.h>`

`Servo myServo;`

`myServo.attach(servoPin);`

`myServo.write(angle);`

Servo myServo — creates a servo object.

attach() — connects the servo object to an ESP32 GPIO pin.

write() — sets the servo position in degrees.

The library is required because the standard Arduino Servo.h library is not intended for ESP32.
