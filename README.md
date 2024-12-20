# PinballMachine

This repository contains a project for the **Mechatronics (ME331)** course at **Bogazici University**, 
Mechanical Engineering Department. This project contains the design and manufacturing process of a pinball machine including market analysis, mechanical components and CAD files, electrical design schematics and circuit diagrams, and software design.
This project was completed by a team of six mechanical engineering students:

Tolga Çatak

Ümit Henkoğlu

İbrahim İşsever

Arda Ulutürk

Yasela Mollaoğlu

Ömer Ercan

---

## Overview

A pinball machine is chosen as the project so that it is challenging enough in terms of all the aspects such as mechanical, electrical, and software and it can be useful for the students as well, while offering a fun time in cafeterias.
A summary of the features are provided in the following sections. 

### Mechanical Design

The pinball machine is built with a size to be large enough for enjoyment and to be modular enough to not cause problems during transportation and installation. The pinball machine constitutes of the following mechanical parts:

2 large, thick mdf (90x50x18 cm) wood panels (Machined with CNC-Router)
1 large, thin mdf wood panel (90x50x8 cm)
1 game-begin shooter
1 in-game shooter
2 flippers
2 slingshots
3 lanes
1 bumper
2 bearings
3 balls
5 meters RGB led strip
Miscallenious wood and 3-D printed parts

An illustration of the pinball machine can be seen below as CAD and in real-life:

![image](https://github.com/user-attachments/assets/577e8d76-cd67-4628-ad7e-1cdbd81277d5)

In this illustration, the numbers represent the followings:

1. Game-begin shooter and its spring
2. Lanes controlled with ultrasonic sensors
3. Spinner corridor where extra points can be scored
4. Bumper, piezo disc, and solenoid valve
5. In-game shooter, ultrasonic sensor, and another solenoid valve
6. Slingshots and the piezo discs


![image](https://github.com/user-attachments/assets/ef17b595-be36-4fbc-bd9d-fd3d24e5b656)


Detailed information regarding the mechanical parts, their desing and manufacturing processes, their CAD drawings, etc. can be found in the report and the mechanical design folder.

### Electrical Design

The electrical design is completed using Arduino as the processor and the computer with additional power sources and transformers for different voltage requirements. The pinball machine constitutes of the following electrical components:

1 Arduino MEGA 2560
1 Voltage Regulator (courtesy of Sinan Öncü - Professor at Bogazici University)
1 12V/5A Adaptor
2 12V Push-Pull Solenoid 
2 24V Push-Pull Solenoid
6 HCSR-04 Ultrasonic Sensor
1 LCD Screen
2 Pushbuttons
4 2A Fuse
3 IRF3205 MOSFET
1 IRLZ44 MOSFET
6 1N5819 Diode 
3 100Ω Resistor
4 200Ω Resistor
1 220Ω Resistor
5 10,000Ω Resistor
3 1000Ω Resistor
3 TIP120 transistors
3 x 50mm Piezo Disc 

The circuit diagram of pinball machine can be seen below:

![image](https://github.com/user-attachments/assets/8ce5c3f5-ccb8-454e-b334-eaf042f88fbd)

A real life picture (not-organized) of the circuit design and the cabling and be seen below:

![IMG-20220105-WA0026](https://github.com/user-attachments/assets/b46de2b1-7e81-452d-b606-a2aadebdbe18)

Detailed information regarding the electrical components, their circuit diagrams and installations, etc. can be found in the report and the electrical design folder.

### Software Design

Software design is completed in the Arduino IDE. The pseudo code and the logic behind the code is shown in the diagram below:

![image](https://github.com/user-attachments/assets/9e4a0d3d-90eb-4476-99dd-24c661d12e2d)

Code can be seen in the src folder.

## Task

In this project with a team of 6 members, the aim was to build something that has mechanical, electrical, and software aspects. As the team, we chose pinball machine as it has all these aspects and can serve a purpose. We based our goal on market analyses as well
and aimed to install this in the department building upon completion of the project.
