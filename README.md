
Ghaith – Smart Humanitarian Relief Tent
This project was developed as part of the Embedded Systems course.



## 1. Abstract
Providing safe shelter, warmth, and clean water is a critical challenge for displaced families in humanitarian crises, particularly in regions such as Gaza. This project presents **“Ghaith – Smart Humanitarian Relief Tent”**, a smart embedded-system-based tent designed to improve living conditions during emergencies.  

The system integrates:
- Temperature sensor (DS18B20)  
- Rain detection sensor  
- Relay-controlled heating element  
- Servo-controlled roof mechanism  

The system operates autonomously around an Arduino Uno and demonstrates an effective, low-cost, scalable solution.

---

## 2. Introduction

### 2.1 Background and Motivation
Humanitarian shelters often lack environmental control. This project aims to design a simple intelligent tent that improves safety and comfort in emergencies.

### 2.2 Problem Statement
Traditional tents provide only basic cover and fail to adapt to environmental changes. Manual solutions are inefficient. A smart tent is needed to respond dynamically.

### 2.3 Project Objectives
- Real-time Monitoring: Temperature and rain  
- Automated Heating: Heater ON below 30°C, OFF above 35°C  
- Environmental Protection: Servo adjusts tent for rain  
- Efficiency: Low-cost, reliable embedded solution

### 2.4 Scope and Limitations
- Arduino Uno-based prototype  
- Educational/demo purposes only  
- Low-voltage heating  
- No internet connectivity or large-scale deployment

---

## 3. System Overview

### 3.1 High-Level Description
Autonomous smart control unit. Sensors monitor conditions; Arduino processes data and controls actuators.

### 3.2 Functional Description
- **Sensing:** DS18B20, Rain sensor  
- **Processing:** Arduino Uno  
- **Actuation:** Relay, Servo  
- **Feedback:** Serial monitoring

### 3.3 Use Case Scenario
- Temp < 30°C → Heater ON  
- Temp ≥ 35°C → Heater OFF  
- Rain detected → Servo closes roof  

---

## 4. Hardware Design

### 4.1 Components List

| Quantity | Component          | Specification          |
|----------|------------------|-----------------------|
| 1        | Arduino Uno       | Microcontroller       |
| 1        | DS18B20           | Temperature Sensor    |
| 1        | FC-37             | Rain Sensor           |
| 1        | 5V Relay          | Relay Module          |
| 1        | Servo Motor       | Actuator              |
| 1        | Low-voltage Heater| Heating Element       |
| 1        | 4.7kΩ Resistor    | Passive               |

### 4.2 Component Justification
- **Arduino Uno:** Reliable, easy to use  
- **DS18B20:** Waterproof, digital readings  
- **Relay Module:** Safe control for heater  
- **Servo Motor:** Precise tent control  

---

## 5. Software Design

### 5.1 Development Environment
- Language: C++ (Embedded)  
- IDE: Arduino IDE  
- Libraries: OneWire, DallasTemperature, Servo  

### 5.2 Software Architecture
Polling-based architecture with hysteresis for heater control (30–35°C).  

### 5.3 Control Algorithm
1. Initialize sensors & actuators  
2. Read temperature  
3. Temp < 30°C → Heater ON  
4. Temp ≥ 35°C → Heater OFF  
5. Read Rain sensor  
6. Rain → Servo Close, else Open  
7. Repeat loop  

---

## 6. Testing and Validation

### 6.1 Testing Strategy
Each component tested individually, then integrated.  

### 6.2 Test Cases

| Test Case | Condition        | Expected Result | Status |
|-----------|-----------------|----------------|--------|
| TC-01     | Temp < 30°C     | Heater ON      | Pass   |
| TC-02     | Temp ≥ 35°C     | Heater OFF     | Pass   |
| TC-03     | Rain Detected   | Servo Activated| Pass   |
| TC-04     | Sensor Error    | Safe State     | Pass   |

---

## 7. Results and Discussion
System responded effectively to environmental changes. Heater control was stable; servo provided protection during rain.

---

## 8. Conclusion
The Ghaith Smart Humanitarian Relief Tent demonstrates how embedded systems can improve safety and comfort for emergency shelters.

---

## 9. Future Work
- Solar power integration  
- IoT monitoring (GSM/Wi-Fi)  
- Advanced insulation  
- Water filtration modules

## 10. Team
Al-Razi University – Embedded Systems Abrar
Belqees Adel Jamil_15
Abrar Marwan Al‑Dubai_2
Raghad Eskander Mokbel_25 
Hafsa Abdullah Al‑Azazi_19 
Roa’a Montaser Al‑Maddi_93 
