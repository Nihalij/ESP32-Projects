# ESP32 Tilt and Motion Detector using MPU6050

## 📌 Project Overview
This project uses an **ESP32** and an **MPU6050 accelerometer and gyroscope sensor** to detect tilt and movement. When the acceleration on the X or Y axis crosses a predefined threshold, an LED turns ON and a message is displayed on the Serial Monitor.

## 🧰 Components Required
- ESP32 Development Board
- MPU6050 Sensor Module (GY-521)
- LED
- 220Ω Resistor
- Jumper Wires
- Breadboard

## 🔌 Circuit Connections

| MPU6050 | ESP32 |
|---|---|
| VCC | 3V3 |
| GND | GND |
| SDA | GPIO 21 |
| SCL | GPIO 22 |

| LED | ESP32 |
|---|---|
| Anode (+) | GPIO 18 through 220Ω resistor |
| Cathode (-) | GND |

## 💻 Software Requirements
- Arduino IDE
- Adafruit MPU6050 Library
- Adafruit Unified Sensor Library
- Adafruit BusIO Library

## ⚙️ Working Principle
1. The ESP32 communicates with the MPU6050 using the I²C protocol.
2. The sensor measures acceleration along the X, Y, and Z axes.
3. The ESP32 reads the X and Y acceleration values.
4. If `abs(x) > 4.0` or `abs(y) > 4.0`, the LED turns ON.
5. If neither condition is true, the LED turns OFF.
6. Sensor readings and alert messages are displayed in the Serial Monitor.

## 🧠 Concepts Learned
- ESP32 I²C communication
- Accelerometer and gyroscope basics
- Reading sensor data using a library
- Conditional statements and logical operators
- Sensor-based LED control
- Motion and tilt detection

## 🚀 Applications
- Basic motion detection systems
- Tilt-sensitive alarms
- Device orientation monitoring
- Simple security and safety systems

## ⚠️ Note
The acceleration threshold of `4.0 m/s²` is configurable. This project detects certain acceleration conditions rather than calculating an exact tilt angle. Sudden movement may also trigger the LED.

## 👩‍💻 Author
Created as part of my ESP32 and Embedded Systems learning journey.
