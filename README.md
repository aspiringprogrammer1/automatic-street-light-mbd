# Automatic Street Light System (Model-Based Design)

This project implements an **Automatic Street Light Control System** using **Model-Based Design (MBD)** in MATLAB/Simulink. The system responds to ambient light levels to turn the street lights ON/OFF automatically.

## Project Overview
- **Semester**: 2nd
- **Approach**: Model-Based Design
- **Technology**: MATLAB/Simulink, Arduino, LDR Sensor
- **Code Generation**: Automatic using Simulink Coder

## System Description
The model simulates a simple logic:
- When ambient light < threshold → Street Light ON
- When ambient light ≥ threshold → Street Light OFF

## Tools Used
- MATLAB/Simulink
- Stateflow (for behavior modeling)
- Arduino + LDR Sensor
- GitHub (for version control)

## Folder Structure
| Folder | Description |
|--------|-------------|
| `models/` | Simulink models and state charts |
| `simulation/` | Simulation results and test cases |
| `code/` | Auto-generated C code for Arduino |
| `hardware/` | Physical circuit design and specs |
| `documentation/` | Reports and requirements |
| `contributors/` | Team member details |

## Model Preview
![Model Screenshot](models/model_screenshots/model_overview.png)

## Team
- **Team Leader**: Amoo Abdurrahman Ayomiku
- **Members**: Iheanacho Jesse, Davidson Joshua Tochukwu, Adedeji Abdul-Malik, Kalu Somtochukwu Emeka, Eyagbajumi Gbubemi Emmanuel

## How to Run
1. Open `models/street_light_system.slx` in MATLAB Simulink.
2. Simulate using different light levels.
3. Generate code using Simulink Coder → Deploy to Arduino.

## License
This project is licensed under the MIT License.
