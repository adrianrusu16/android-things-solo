# android-things-solo

<p>
What this project aims to accomplish is to mimic a distance sensor. A script will continuously read data about the distance of the object detected in front of the sensor and change the color af an LED accordingly. 

<br><br>The purpose of this project is simple, to create a distance sensor, for example, on a car to detect close objects to it as to not hit them, or where a certain distance needs to be kept between 2 objects, either to keep them apart or close to each other.

<br><br>The distance sensor requires 5V for which I used an arduino as a power source.</p>

## Schematics
![click me](https://github.com/adrianrusu16/android-things-solo/blob/main/at_bb.png)

## Pre-requisites
- 1 Arduino board
    - Arduino UNO R3
    - https://www.arduinostarterkits.com/reviews/arduino-uno-r3-board/
- 1 Distance Sensor
    - Ultrasonic Distance Sensor - HC-SR04
    - https://lastminuteengineers.com/arduino-sr04-ultrasonic-sensor-tutorial/
- 1 breadboard
    - MB-102
    - https://www.rpelectronics.com/mb-102-breadboard-830-white.html
- 1 RGB LED
- 3 150Ω resistors
- wires
- Arduino IDE
    - https://www.arduino.cc/en/software

## Setup
1. Download the Arduino IDE: https://www.arduino.cc/en/software
2. Download the code from https://github.com/adrianrusu16/android-things-solo/blob/main/distance/distance.ino
3. Construct the board as shown in the schematics
4. Upload the code to the board using Arduino IDE

## Run
1. Connect the boards to a power supply
2. Make sure there are no gases or smoke nearby to see the red blinking LED.
3. Put an object in front of the sensor and notice how the LED changes colours depending on the distance from said object.
