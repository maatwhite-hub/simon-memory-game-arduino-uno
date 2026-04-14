# Simon Memory Game | Arduino Uno

## Overview

This project is a Simon-style memory game prototype built using an Arduino Uno. It demonstrates the integration of hardware and firmware to create an interactive embedded system using push buttons, LEDs, and a buzzer.

## Features

* 4 push-button inputs (Blue, Red, Yellow, Green)
* 4 LEDs for visual feedback
* Buzzer for audio tones
* Active-low input using pull-up resistors
* Serial debugging (115200 baud)

## How It Works
The system is built around an Arduino Uno microcontroller and utilizes GPIO-based digital input and output to interface with external hardware components. Four push-button inputs are configured using pull-up resistors, resulting in active-low logic where each input pin remains at a default HIGH state and transitions to LOW when a button is pressed.

Within the main execution loop, the microcontroller continuously polls each GPIO input pin to detect state changes. Upon detecting a LOW signal (button press), the firmware triggers a corresponding output response by driving the associated LED pin HIGH and generating a square wave signal on the buzzer using the built-in tone() function. Each button is mapped to a unique frequency to replicate the audio-visual feedback of a Simon game.

Serial communication is implemented using the microcontroller’s UART peripheral, configured at 115200 baud via the Serial interface. This allows real-time transmission of system states (e.g., button press events) to a host machine for debugging and validation through the Serial Monitor.

This system demonstrates fundamental embedded concepts including GPIO control, active-low input design, real-time polling, UART-based communication, and synchronized multi-output control within a single-threaded firmware loop.

## Tools & Environment
- Wokwi Simulator (Arduino development, circuit design, and firmware testing)
- Arduino (C/C++ embedded programming)
- Serial Monitor (debugging at 115200 baud)

## Hardware Components

* Arduino Uno 
* Breadboard
* 4 Push Buttons
* 4 LEDs
* Resistors (LED + pull-up)
* Buzzer
* Jumper wires

## Design Considerations
- Button debouncing was considered during development to improve input reliability. Hardware-based debouncing using capacitors was initially planned; however, due to limitations within the Wokwi simulation environment, this was not implemented. Future iterations may include hardware or software debouncing techniques to enhance system stability. 
- Future iterations may transition from polling to interrupt-driven input handling to improve efficiency and responsiveness.

## Skills Demonstrated

* Basic Embedded Systems Programming (C/C++)
* GPIO Input/Output Control
* Active-low logic (pull-up resistors)
* Hardware-software integration
* Serial debugging

## Acknowledgment

This project was developed as part of an embedded systems course. The implementation is based on course concepts, with independent hardware setup, testing, and debugging.

## Circuit Diagram

![Circuit Diagram](circuit_design_simon.png)
