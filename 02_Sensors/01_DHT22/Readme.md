# DHT22 Temperature & Humidity Sensor with ESP32

This project demonstrates how to interface a **DHT22 temperature and humidity sensor with ESP32**.

## Components

* ESP32
* DHT22 sensor
* LED
* Resistor
* Jumper wires

## Features

* Reads temperature in °C
* Reads humidity in %
* Displays readings on Serial Monitor
* Turns ON the LED when temperature exceeds 30°C
* Turns OFF the LED when temperature is 30°C or below

## Connections

| DHT22 | ESP32  |
| ----- | ------ |
| VCC   | 3.3V   |
| DATA  | GPIO 4 |
| GND   | GND    |

LED:

* LED → GPIO 25
* GND → GND through resistor

## Required Library

Install the **DHT sensor library** by Adafruit from the Arduino Library Manager.

## Working

The ESP32 reads temperature and humidity from the DHT22 every 2 seconds.

If:

`Temperature > 30°C`

the LED turns ON.

Otherwise, the LED remains OFF.
