# MCU-Programming-Bidirectional-LED-Runner-with-Switch-Control-AVR-
This project demonstrates a switch-controlled LED sequence using an AVR microcontroller. When the switch is pressed, LEDs connected to PORTF light up in **reverse order** (right to left). When the switch is not pressed, they light up in **forward order** (left to right). This logic is implemented using low-level C with direct register manipulation.

---

## Project Overview

- **Microcontroller**: AVR (ATmega2560)
- **Clock Frequency**: 8 MHz
- **Inputs**: One digital switch (PD0)
- **Outputs**: 7 LEDs connected to PORTF (PF0–PF6)
- **Programming Language**: C
- **Simulation Tools**: [Proteus](https://www.labcenter.com/), [AVR Studio](https://www.microchip.com/mplab/avr-support/atmel-studio-7)

---

## How It Works

- **Switch Setup**: Connected to `PD0`, with internal pull-up resistor enabled.
- **LEDs**: All PORTF pins set as outputs.
- **Switch Logic**:
  - **Pressed (PD0 = LOW)**: LEDs blink from PF6 to PF0 (right-to-left).
  - **Released (PD0 = HIGH)**: LEDs blink from PF0 to PF6 (left-to-right).
- **Delay**: 500ms between each LED transition.

---

## Circuit Setup

| Component         | Pin           |
|------------------|---------------|
| Switch           | PD0 (Digital Input) |
| LEDs             | PF0–PF6 (Digital Outputs) |
| Pull-up Resistor | Internal via code |
| Power Supply     | 5V            |

You can simulate this circuit in Proteus using an ATmega32 or similar chip, or implement it on a physical breadboard.

## Circuit Setup in proteus
<img width="917" height="604" alt="image" src="https://github.com/user-attachments/assets/23bcdd68-931f-4326-9af9-89b752f291a9" />

