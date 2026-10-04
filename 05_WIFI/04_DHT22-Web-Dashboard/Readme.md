# ESP32 DHT22 Web Dashboard

This project uses an **ESP32 and DHT22 sensor** to measure temperature and humidity and display the readings on a web page.

## 🔧 Components

* ESP32
* DHT22 Temperature & Humidity Sensor
* Jumper wires
* Wi-Fi connection

## 📌 Features

* Connects ESP32 to Wi-Fi
* Reads temperature and humidity from DHT22
* Creates a web server
* Displays sensor readings on a web page
* Automatically refreshes the webpage every 2 seconds

## ⚙️ How It Works

1. ESP32 connects to the Wi-Fi network.
2. The DHT22 sensor reads temperature and humidity.
3. ESP32 starts a web server.
4. Open the ESP32 IP address in a browser.
5. The webpage displays:

   * **Temperature in °C**
   * **Humidity in %**
6. The page automatically refreshes every **2 seconds**.

## 🌐 Web Server

| URL | Function                          |
| --- | --------------------------------- |
| `/` | Displays temperature and humidity |

## 📍 Pin Connection

| DHT22 | ESP32  |
| ----- | ------ |
| VCC   | 3.3V   |
| DATA  | GPIO 4 |
| GND   | GND    |

## 🧠 Concepts Learned

* ESP32 Wi-Fi
* Web server
* DHT22 sensor
* Temperature measurement
* Humidity measurement
* HTML webpage
* Automatic webpage refresh
* HTTP routes
* `server.handleClient()`

## 📚 Libraries Used

```cpp
#include <WiFi.h>
#include <WebServer.h>
#include "DHT.h"
```

## 🛠️ Software

* Arduino IDE
* ESP32 Board Package
* Wokwi (optional)

## 🚀 Future Improvements

* Add a graphical temperature/humidity chart
* Add LED alerts for high temperature
* Add multiple sensors
* Store sensor readings
* Create a better IoT dashboard
