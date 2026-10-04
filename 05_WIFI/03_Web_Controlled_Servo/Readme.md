# ESP32 Web Server Servo Control

This project uses an **ESP32** to control a servo motor through a web browser using Wi-Fi.

## 🔧 Components

* ESP32
* Servo Motor
* Jumper wires
* Wi-Fi connection

## 📌 Features

* Connects ESP32 to Wi-Fi
* Creates a web server
* Displays the ESP32 IP address
* Controls the servo from a web page
* Moves the servo to **0°, 90°, and 180°**

## ⚙️ How It Works

1. ESP32 connects to the Wi-Fi network.
2. The ESP32 gets an IP address.
3. A web server is started on port `80`.
4. Open the ESP32 IP address in a browser.
5. The webpage provides three buttons:

   * **Servo 0** → Moves servo to 0°
   * **Servo 90** → Moves servo to 90°
   * **Servo 180** → Moves servo to 180°

## 🌐 Web Routes

| URL    | Function                |
| ------ | ----------------------- |
| `/`    | Main servo control page |
| `/0`   | Moves servo to 0°       |
| `/90`  | Moves servo to 90°      |
| `/180` | Moves servo to 180°     |

## 🧠 Concepts Learned

* ESP32 Wi-Fi
* Web server
* HTTP routes
* Servo motor control
* `ESP32Servo` library
* `myservo.attach()`
* `myservo.write()`
* `WiFi.localIP()`
* `server.handleClient()`

## 📚 Libraries Used

```cpp
#include <WiFi.h>
#include <WebServer.h>
#include <ESP32Servo.h>
```

## 📍 Pin Connection

| Component    | ESP32 Pin |
| ------------ | --------- |
| Servo Signal | GPIO 18   |
| Servo VCC    | 5V        |
| Servo GND    | GND       |

## 🛠️ Software

* Arduino IDE
* ESP32 Board Package
* Wokwi (optional)

## 🚀 Future Improvements

* Add a slider for continuous servo control
* Control servo angle from `0°–180°`
* Add multiple servos
* Add sensor-based servo control
* Improve the web page design
