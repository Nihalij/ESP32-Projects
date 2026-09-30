# ESP32 PIR Motion Counter Using Interrupt

## 📌 Overview

This project demonstrates how to use a **PIR (Passive Infrared) motion sensor** with an **ESP32 hardware interrupt**.

Whenever the PIR sensor detects motion, its output changes from LOW to HIGH. This rising edge triggers an interrupt, and the ESP32 increments the motion counter.

The total number of detected motion events is displayed on the Serial Monitor.

## 🔧 Components Required

- ESP32
- PIR Motion Sensor
- Jumper wires
- Breadboard

## 🔌 Circuit Connections

| PIR Sensor | ESP32 |
|---|---|
| VCC | 5V |
| GND | GND |
| OUT | GPIO 4 |

### ⚙️ How It Works

⚙️ Working
- The PIR sensor detects movement by sensing changes in infrared radiation.
- The PIR sensor's OUT pin is connected to GPIO 4 of the ESP32.
- When motion is detected, the PIR output changes from LOW to HIGH.
- The ESP32 detects this RISING edge using a hardware interrupt.
- The interrupt calls the motionISR() function.
- Inside the ISR, motioncount is increased by 1.
- The updated motion count is displayed on the Serial Monitor every second.
