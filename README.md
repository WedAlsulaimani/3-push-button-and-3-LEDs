# 3-push-button-and-3-LEDs
Repositry for 3 push button and 3 LEDs using Tinker Card

# Arduino Push Button LED Control (Tinkercad Simulation)

This is a simple Arduino project created using [Tinkercad](https://www.tinkercad.com/) that uses **three push buttons** to control **three LEDs**. Each button turns on a corresponding LED while it is being pressed, and the LED turns off immediately when the button is released.

## Objective

- Learn how to connect and read input from push buttons.
- Control LEDs based on user input.
- Practice using basic digital I/O in Arduino.
- Simulate the project using Tinkercad without needing physical hardware.

## Circuit Setup

| Component     | Arduino Pin |
|---------------|-------------|
| Push Button 1 | D2          |
| LED 1 (Red)   | D13         |
| Push Button 2 | D3          |
| LED 2 (Yellow)| D12         |
| Push Button 3 | D4          |
| LED 3 (Blue)  | D11         |

- Use 220Ω resistors for LEDs.
- Use 10kΩ pull-down resistors for each button to avoid floating input.

## How It Works

- Each button is connected to a digital input pin.
- When a button is pressed, the Arduino reads it as HIGH.
- The corresponding LED is turned on (HIGH).
- When the button is released, the LED is turned off (LOW).
