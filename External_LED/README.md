# 🔖 ESP32 D2 LED Blinking Project

## 📌 Overview

This project demonstrates how to control an external LED using an ESP32 development board.

The LED is connected to the D2 pin (GPIO 2) and blinks continuously with a one-second ON and OFF interval.

It introduces the basics of ESP32 GPIO programming and digital output control using the Arduino IDE.

## 🧰 Components Required

- ESP32 Development Board
- LED
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## ⚙️ Working Principle

The ESP32 controls the LED through GPIO 2.

The `pinMode()` function configures the pin as an output. The `digitalWrite()` function sends HIGH and LOW signals to turn the LED ON and OFF.

The `delay(1000)` function creates a one-second interval between each state change.

## 🔌 Circuit Connections

| LED Component | ESP32 |
|---|---|
| LED Anode (+) | D2 (GPIO 2) through 220Ω resistor |
| LED Cathode (-) | GND |

## 🚀 How to Run

1. Connect the LED to the ESP32 D2 pin through a 220Ω resistor.
2. Open the `.ino` file in Arduino IDE.
3. Select your ESP32 board under Tools → Board.
4. Select the correct COM port.
5. Click Upload.
6. Observe the LED blinking every second.

## 🎯 Learning Outcomes

- Understanding ESP32 development.
- Configuring GPIO pins.
- Controlling external LEDs.
- Using `pinMode()` and `digitalWrite()`.
- Understanding HIGH and LOW signals.
- Implementing time delays using `delay()`.

---

**Platform:** ESP32  
**GPIO Pin:** D2 (GPIO 2)  
**Language:** C++ (Arduino IDE)  
**Project:** LED Blinking
