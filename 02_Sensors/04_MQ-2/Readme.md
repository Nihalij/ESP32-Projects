# MQ-2 Gas Sensor with ESP32

This project demonstrates how to interface an **MQ-2 gas sensor with ESP32** and create a simple gas detection alert system.

## Components

- ESP32
- MQ-2 Gas Sensor
- LED
- Buzzer
- Resistor
- Wokwi Simulator

## Connections

| Component | ESP32 Pin |
|---|---|
| MQ-2 AO | GPIO 35 |
| LED | GPIO 5 |
| Buzzer | GPIO 21 |
| GND | GND |

## Working

The MQ-2 sensor provides an analog value based on the detected gas level.

- **Gas value > 2000** → LED and buzzer turn ON
- **Gas value ≤ 2000** → LED and buzzer remain OFF

The gas value and status are displayed on the Serial Monitor.

## What I Learned

- Interfacing an MQ-2 gas sensor with ESP32
- Reading analog values using `analogRead()`
- Using threshold-based detection
- Controlling an LED and buzzer
- Monitoring sensor values using the Serial Monitor

## Note

The threshold value `2000` is used for this project/simulation. The raw ADC value should not be directly considered as gas concentration in ppm without proper calibration.

## Future Improvements

- Add an OLED display
- Add Wi-Fi notifications
- Add a ventilation fan
- Calibrate the sensor
- Build a complete gas leakage alarm system
































































