# PIR Motion Sensor with ESP32

This project demonstrates how to interface a **PIR (Passive Infrared) motion sensor with an ESP32** to detect motion and control an LED.

## Components

* ESP32 DevKit
* PIR Motion Sensor
* LED
* Resistor
* Wokwi Simulator

## Connections

### PIR Sensor → ESP32

| PIR Pin | ESP32 Pin |
| ------- | --------- |
| VCC     | 3.3V      |
| OUT     | GPIO 34   |
| GND     | GND       |

### LED → ESP32

| LED         | ESP32                    |
| ----------- | ------------------------ |
| Anode (+)   | GPIO 17 through resistor |
| Cathode (-) | GND                      |

## How It Works

The PIR sensor detects changes in **infrared radiation** caused by moving objects, such as people.

1. The PIR sensor detects motion.
2. Its output becomes **HIGH**.
3. ESP32 reads the sensor using GPIO 34.
4. The LED turns **ON**.
5. `"Motion Detected!!"` is displayed on the Serial Monitor.

When no motion is detected:

* PIR output becomes **LOW**.
* LED turns **OFF**.
* `"NO Motion!!"` is displayed.

