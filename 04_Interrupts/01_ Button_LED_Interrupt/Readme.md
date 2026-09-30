# ESP32 Button Interrupt with LED

## 📌 Overview

This project demonstrates how to use an **external hardware interrupt** on an ESP32.

A push button is connected to GPIO 4. When the button is pressed, an interrupt is triggered and the LED connected to GPIO 2 changes its state.

Instead of continuously checking the button inside `loop()`, the ESP32 immediately responds to the button press using an interrupt.

## 🔧 Components Required

- ESP32
- Push button
- LED
- Resistor (220Ω–1kΩ)
- Jumper wires

## 🔌 Circuit Connections

### Push Button

| Component | ESP32 |
|---|---|
| Button side 1 | GPIO 4 |
| Button opposite side | GND |

The button uses the ESP32's internal pull-up resistor:

pinMode(BUTTON_PIN, INPUT_PULLUP);

Therefore, no external pull-up resistor is required.

### LED

| Component	|ESP32|
|---|---|
|LED Anode (+)	|GPIO 2 through resistor|
|LED Cathode (-)	|GND|
