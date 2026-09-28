# ESP32 LDR → LED Brightness

## 📌 Description

This project uses an LDR (Light Dependent Resistor) with an ESP32 to measure light intensity and control the brightness of an LED using PWM.

The LDR is connected to the ESP32 ADC pin (GPIO 34), and the LED is controlled using GPIO 22 with ESP32 LEDC PWM.

## 🛠️ Components

- ESP32 DevKit
- LDR
- LED
- Resistor

## 🔌 Pin Connections

| Component | ESP32 Pin |
|---|---|
| LDR Signal | GPIO 34 |
| LED | GPIO 22 |
| LDR VCC | 3.3V |
| LDR GND | GND |
| LED GND | GND |

## 🧠 Concepts Learned

- LDR
- `analogRead()`
- ESP32 ADC
- ADC resolution
- `map()`
- PWM
- `ledcAttach()`
- `ledcWrite()`
- Serial Monitor

## ⚙️ Working

The LDR produces an analog value based on the amount of light.

The ESP32 reads this value using its ADC:

```text
LDR
 ↓
GPIO 34
 ↓
analogRead()
 ↓
0–4095
 ↓
map()
 ↓
0–255
 ↓
ledcWrite()
 ↓
GPIO 22
 ↓
LED Brightness
