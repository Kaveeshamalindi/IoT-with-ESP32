# 💡 ESP32 LED Blinking Project

## 📌 Overview

This project demonstrates a basic LED blinking system using an ESP32 development board.

The ESP32 controls an external LED connected to GPIO 2 by switching it ON and OFF at one-second intervals.

It introduces the fundamentals of GPIO pin configuration and digital output operations using the Arduino IDE.

## 🧰 Components Required

- ESP32 Development Board
- LED
- 220Ω resistor
- Breadboard
- Jumper wires
- USB cable

## ⚙️ Working Principle

The ESP32 controls the LED through GPIO 2.

The program sets GPIO 2 as an OUTPUT pin. It sends a HIGH signal to turn ON the LED and a LOW signal to turn it OFF.

A one-second delay is used between each state change, making the LED blink continuously.

## 🔌 Circuit Connections

| LED Component | ESP32 |
|---|---|
| LED Anode (+) | GPIO 2 through 220Ω resistor |
| LED Cathode (-) | GND |

## 🚀 How to Run

1. Connect the LED to ESP32 GPIO 2 using a 220Ω resistor.
2. Open the `.ino` file in Arduino IDE.
3. Select your ESP32 board under Tools → Board.
4. Select the correct COM port.
5. Click Upload.
6. Observe the LED blinking every second.

## 🎯 Learning Outcomes

- Understanding ESP32 GPIO pins.
- Configuring digital output.
- Controlling external LEDs.
- Using `digitalWrite()` and `pinMode()`.
- Understanding `delay()` in Arduino programming.
- Getting started with ESP32 development.

---

**Platform:** ESP32  
**GPIO Pin:** GPIO 2  
**Language:** C++ (Arduino IDE)  
**Project:** LED Blinking
