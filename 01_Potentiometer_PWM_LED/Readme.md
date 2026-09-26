# ESP32 Potentiometer → ADC → PWM LED

## 📌 Description

This project uses an ESP32 to read the analog value from a potentiometer and control the brightness of an LED using PWM.

The potentiometer is connected to the ESP32 ADC pin (GPIO 34), and the LED is controlled through GPIO 18.

## 🛠️ Components

* ESP32 DevKit
* Potentiometer
* LED
* 1 kΩ Resistor

## 🔌 Pin Connections

| Component         | ESP32 Pin |
| ----------------- | --------- |
| Potentiometer VCC | 3.3V      |
| Potentiometer GND | GND       |
| Potentiometer SIG | GPIO 34   |
| LED               | GPIO 18   |
| LED GND           | GND       |

## 🧠 Concepts Learned

* `analogRead()`
* ESP32 ADC
* ADC resolution (0–4095)
* `map()`
* PWM
* `analogWrite()`
* Serial Monitor

## ⚙️ Working

The potentiometer produces an analog voltage that is read by GPIO 34.

The ESP32 ADC converts this voltage into a value between:

```text
0 → 4095
```

This value is then mapped to the PWM range:

```text
0 → 255
```

The PWM value controls the brightness of the LED.

```text
Potentiometer
      ↓
GPIO 34 (ADC)
      ↓
analogRead()
      ↓
0–4095
      ↓
map()
      ↓
0–255
      ↓
analogWrite()
      ↓
GPIO 18
      ↓
LED Brightness
```

## 💻 Simulation

This project was designed and tested using **Wokwi ESP32 Simulator**.

## 📁 Files

* `potentiometer_pwm_led.ino` — ESP32 source code
* `diagram.json` — Wokwi circuit configuration
