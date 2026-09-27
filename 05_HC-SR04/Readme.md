# HC-SR04 Ultrasonic Sensor with ESP32

This project demonstrates how to interface an **HC-SR04 ultrasonic distance sensor with an ESP32** and control an LED based on the measured distance.

## Components

* ESP32 DevKit
* HC-SR04 Ultrasonic Sensor
* Yellow LED
* 500Ω Resistor
* Wokwi Simulator

## Connections

### HC-SR04 → ESP32

| HC-SR04 Pin | ESP32 Pin |
| ----------- | --------- |
| VCC         | 3.3V      |
| GND         | GND       |
| ECHO        | GPIO 34   |
| TRIG        | GPIO 5    |

### LED → ESP32

| LED         | ESP32                         |
| ----------- | ----------------------------- |
| Anode (+)   | GPIO 18 through 500Ω resistor |
| Cathode (-) | GND                           |

## How It Works

The **HC-SR04** measures distance using ultrasonic waves.

1. ESP32 sends a trigger pulse through the **TRIG** pin.
2. The sensor sends an ultrasonic wave.
3. The wave reflects from an object and returns to the sensor.
4. The **ECHO** pin produces a pulse whose duration represents the distance.
5. ESP32 calculates the distance from this pulse duration.
6. The LED can be controlled according to the measured distance.

## Pin Configuration

```cpp
#define TRIG_PIN 5
#define ECHO_PIN 34
#define LED_PIN 18
```

## Simulation

This project was created and tested using **Wokwi**.

## What I Learned

* Interfacing an ultrasonic sensor with ESP32
* Using GPIO pins for sensor input and output
* Measuring distance using the ECHO pulse
* Controlling an LED based on sensor data
* Creating and testing ESP32 circuits in Wokwi

## Future Improvements

* Add an LCD/OLED to display the distance
* Add a buzzer for proximity alerts
* Create a parking sensor
* Connect the ESP32 to Wi-Fi and monitor distance remotely
