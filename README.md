# Solar Sunflower Tracking System 🌻

## Project Description

This project is an automatic solar tracking system in which a solar panel rotates using a servo motor to align with the direction of maximum light intensity. The system uses LDR sensors and an Arduino to continuously adjust the panel position.

---

## Components Used

- Arduino  
- Breadboard  
- LDR Sensors (Analog)  
- Small Solar Panel  
- Micro Servo Motor  
- Connecting Wires  

---

## Working Principle

Two LDR sensors are placed parallel to each other along the axis of the solar panel. These sensors detect the intensity of light falling on them.

The Arduino reads the sensor values and compares the difference between them. Based on a predefined threshold, it determines the direction of higher light intensity and sends a control signal to the servo motor.

The servo motor rotates accordingly, and since the solar panel is mounted on it, the panel aligns itself towards the direction of maximum light. This forms a basic closed-loop control system that continuously adjusts the panel orientation.

---

## project demo:-

https://drive.google.com/file/d/1kiY7gXZi8LBy6RqSe1vzTXFASPUnZCXr/view?usp=drivesdk

https://drive.google.com/file/d/1Lgf4bdTdiG7e9MzXpNGoTguxIHGnfUav/view?usp=drivesdk

---

## Future Improvements:-

- Upgrade to an ESP32 microcontroller for wi-fi module 
- Develop a web interface to display and analyze system output  
- Extend the system to dual-axis tracking for improved efficiency  
