# ESP32 IR Sensor Object Detection

This project uses an **ESP32** and an **IR sensor** to detect whether an object is present. When an object is detected, an LED turns ON. When no object is detected, the LED turns OFF.

## Components Required

* ESP32
* IR Sensor Module
* LED
* 220Ω resistor
* Breadboard
* Jumper wires

## Pin Connections

| Component     | ESP32 Pin |
| ------------- | --------- |
| IR Sensor OUT | GPIO 27   |
| IR Sensor VCC | 3.3V      |
| IR Sensor GND | GND       |
| LED           | GPIO 5    |

> Use a suitable resistor in series with the LED.

## Working

1. The IR sensor detects the presence of an object.
2. The ESP32 reads the sensor using `digitalRead()`.
3. When the sensor output is `LOW`, an object is detected.
4. The ESP32 turns the LED ON and prints **"Object detected!"**.
5. When the sensor output is `HIGH`, the LED is turned OFF and **"No object"** is printed.
6. The sensor is checked every 500 ms.

## Output

When an object is detected:

```text
Object detected!
```

When no object is detected:

```text
No object
```

The LED also turns ON when an object is detected and OFF when no object is detected.

## Concepts Learned

* ESP32 GPIO pins
* Digital input
* Digital output
* `digitalRead()`
* `digitalWrite()`
* IR sensor interfacing
* LED control
* Serial Monitor

## Future Improvements

* Add a buzzer when an object is detected
* Count detected objects
* Display the detection status on an OLED
