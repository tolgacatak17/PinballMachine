# Pinball Machine

This repository contains a project for the **Mechatronics (ME331)** course at **Bogazici University**, Mechanical Engineering Department. This project involves the design and manufacturing of a pinball machine, encompassing market analysis, mechanical components and CAD files, electrical design schematics, circuit diagrams, and software development. The project was completed by a team of six mechanical engineering students:

- Tolga Çatak  
- Ümit Henkoğlu  
- İbrahim İşsever  
- Arda Ulutürk  
- Yasela Mollaoğlu  
- Ömer Ercan  

---

## Overview

The pinball machine was chosen as the project for its challenging interdisciplinary requirements in mechanical, electrical, and software design while providing a fun and engaging user experience. The design is modular for easy transportation and installation.  
The following sections summarize its features.


---

## Mechanical Design

The machine is designed with MDF panels, 3D-printed parts, and other components for modularity and durability. Key parts include:

- MDF panels for the main structures and the floor
- Game-begin shooter and spring
- In-game shooter
- Flippers and slingshots
- Lanes and bumper
- Ball bearings
- Miscellaneous wooden and 3D-printed components

An illustration of the pinball machine can be seen below as CAD and in real-life:

<p align="center">
  <img src="https://github.com/user-attachments/assets/577e8d76-cd67-4628-ad7e-1cdbd81277d5" alt="Pinball Machine CAD" width="500">
</p>

<p align="center">
  <img src="https://github.com/user-attachments/assets/ef17b595-be36-4fbc-bd9d-fd3d24e5b656" alt="Pinball Machine Real-Life" width="1000">
</p>

Detailed information about mechanical components and their manufacturing process can be found in the mechanical design folder.

---

## Electrical Design

The system is powered by an Arduino MEGA 2560 and includes multiple sensors and actuators:

- Voltage regulator (courtesy of Sinan Öncü - Course Instructor)
- 12V/5A Adaptor
- Solenoid actuators
- Ultrasonic sensors for location detection
- Piezoelectric sensors for impact detection
- RGB LED strips
- LCD Screen
- Various diodes, transistors, resistors, fuses, mosfets, pushbuttons, etc.

The circuit diagram of the pinball machine can be seen below:

<p align="center">
  <img src="https://github.com/user-attachments/assets/8ce5c3f5-ccb8-454e-b334-eaf042f88fbd" alt="Circuit Diagram" width="1500">
</p>

A real-life, unorganized view of the circuit design and cabling is shown below:

<p align="center">
  <img src="https://github.com/user-attachments/assets/b46de2b1-7e81-452d-b606-a2aadebdbe18" alt="Real-Life Circuit Design" width="600">
</p>

Detailed information regarding the electrical components, their circuit diagrams, and installations can be found in the electrical design folder.

---

## Software Design

The software for the pinball machine is developed in Arduino IDE. Key features include:

- Real-time scoring displayed on an LCD screen
- RGB LED lighting modes for idle and active states
- Closed-loop control for the in-game shooter

The pseudocode and the logic behind the software design can be found in the [diagram](https://github.com/user-attachments/assets/9e4a0d3d-90eb-4476-99dd-24c661d12e2d); outlining the step-by-step logic of the system, including scoring calculations, sensor integrations, and game state transitions. (The diagram is provided as a link since it is too large to display directly.)

Source code can be found in the software folder.

---

## Task

The primary goal of the project was to design and manufacture a pinball machine that integrates mechanical, electrical, and software components in a meaningful way. After conducting a thorough market analysis, we concluded that a pinball machine would not only challenge us in all aspects of the course but also provide utility for our department. The project’s objectives were as follows:

1. Design and manufacture a functional pinball machine with mechanical, electrical, and software components.
2. Conduct market analysis to understand pricing and user expectations.
3. Ensure modularity and sustainability in design for easy transportation and low cost.
4. Implement a scoring system and gameplay logic with Arduino.
5. Install the pinball machine in the department building for use after completion.

---

## Repository Structure

The repository is organized as follows:

1. **`code/`**: Contains the Arduino scripts used for controlling the pinball machine's functionality.

2. **`figures/`**: Includes images, CAD illustrations, and visualizations of the pinball machine.

3. **`report/`**: Contains the detailed project report explaining the mechanical, electrical, and software designs, along with the implementation and analysis.

4. **`README.md`**: Provides an overview of the project, its objectives, and instructions for understanding and replicating the design.

