# ESP32 UART Loopback Test

## 📌 Overview

This project demonstrates **UART loopback communication** using an ESP32.

In a loopback test, data transmitted by the ESP32 is connected back to its own RX pin. The ESP32 sends a message through its TX pin and receives the same message through its RX pin.

This is useful for testing whether the ESP32's UART communication is working correctly.

## 🔧 Components Required

* 1 × ESP32 development board
* 1 × LED
* 1 × 220Ω resistor
* Jumper wire

## 🔌 Circuit Connections

For UART2:

| ESP32 Pin    | Connection                       |
| ------------ | -------------------------------- |
| GPIO 17 (TX) | GPIO 16 (RX)                     |
| GPIO 16 (RX) | GPIO 17 (TX)                     |
| GPIO 18      | LED Anode (+)                    |
| GND          | LED Cathode (-) through resistor |

### Loopback Connection

```text
        ESP32
     ┌───────────┐
     │           │
TX 17├───────────┤RX 16
     │           │
     └───────────┘
        ↑
     Loopback
```

The **TX pin is directly connected to the RX pin**.

## ⚙️ UART Configuration

```cpp
HardwareSerial mySerial(2);

mySerial.begin(115200, SERIAL_8N1, 16, 17);
```

* **UART Port:** UART2
* **Baud Rate:** 115200
* **Data Format:** 8N1
* **RX:** GPIO 16
* **TX:** GPIO 17

## 💻 How It Works

The ESP32 sends the message:

```text
ON
```

through the TX pin:

```cpp
mySerial.println("ON");
```

Because TX and RX are connected together, the transmitted data returns to the ESP32 through the RX pin.

The ESP32 checks whether data has been received:

```cpp
if(mySerial.available())
```

and reads the received message:

```cpp
String command = mySerial.readStringUntil('\n');
```

The received command is then printed to the Serial Monitor.

If the command is `"ON"`, the LED is turned ON.

```cpp
digitalWrite(LED_PIN, HIGH);
```

If the command is `"OFF"`, the LED is turned OFF.

```cpp
digitalWrite(LED_PIN, LOW);
```

## 🧠 Key Concepts Learned

* UART communication
* UART2 on ESP32
* TX and RX pins
* UART loopback
* Baud rate
* `HardwareSerial`
* `available()`
* `readStringUntil()`
* Serial data transmission and reception
* GPIO control

## 📤 Expected Output

The Serial Monitor will display:

```text
DATA RECEIVED: ON
LED ON
```

The `"ON"` message is transmitted and then received back through the loopback connection.

## 🔬 Why Use Loopback?

A loopback test allows you to verify UART communication **without needing a second ESP32**.

It can help check:

* Whether UART transmission is working
* Whether UART reception is working
* Whether the TX/RX wiring is correct
* Whether the selected baud rate is correct

## 🚀 Next Step

After understanding UART loopback, the next step is to use **two ESP32 boards** and establish actual UART communication:

```text
ESP32 #1 TX ─────→ ESP32 #2 RX
ESP32 #1 RX ←───── ESP32 #2 TX
ESP32 #1 GND ───── ESP32 #2 GND
```

This allows one ESP32 to send commands and the other ESP32 to receive and process them.

## 📚 Conclusion

This project demonstrates a basic **UART loopback test on ESP32**, where transmitted data is received back by the same ESP32. It provides a foundation for learning communication between two microcontrollers.
