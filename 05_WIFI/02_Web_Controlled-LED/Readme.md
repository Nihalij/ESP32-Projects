# ESP32 Web Server LED Control

This project uses an **ESP32** to create a simple web server that controls an LED through a web browser.

## 🔧 Components

* ESP32
* LED (built-in LED on GPIO 2)
* Wi-Fi connection

## 📌 Features

* Connects ESP32 to Wi-Fi
* Creates a web server
* Displays the ESP32 IP address
* Turns LED ON/OFF using buttons on a web page

## ⚙️ How It Works

1. ESP32 connects to the Wi-Fi network.
2. The ESP32 gets an IP address.
3. A web server is started on port `80`.
4. Open the ESP32 IP address in a browser.
5. The webpage provides:

   * **LED ON** → Turns the LED ON
   * **LED OFF** → Turns the LED OFF

## 🌐 Web Routes

| URL    | Function          |
| ------ | ----------------- |
| `/`    | Main control page |
| `/on`  | Turns LED ON      |
| `/off` | Turns LED OFF     |

## 🧠 Concepts Learned

* ESP32 Wi-Fi
* `WiFi.begin()`
* `WiFi.status()`
* `WiFi.localIP()`
* Web server using `WebServer`
* HTTP routes
* GPIO control
* `server.handleClient()`

## 🛠️ Software

* Arduino IDE
* ESP32 Board Package
* `WiFi.h`
* `WebServer.h`

## 📷 Result

The ESP32 hosts a webpage where the user can control the LED remotely using a web browser.

## 🚀 Future Improvements

* Add sensor data to the webpage
* Control multiple LEDs
* Add a better webpage design
* Create an IoT dashboard
* Control devices from a mobile phone
