# Smart Bin Project

An IoT-based smart bin solution using Arduino Uno and ESP8266 to improve waste management by automating lid operation, monitoring fill levels, and sending email alerts when the bin is full.

---

## 🛠️ Features
- **Automatic Lid Opening:** Ultrasonic sensor detects approaching objects and opens the lid using a servo motor.
- **Fill Level Monitoring:** Tracks the bin's fill level using an internal ultrasonic sensor.
- **Email Alerts:** Sends a notification to a user-specified email address when the bin is 80% full.
- **Enhanced Hygiene:** Reduces manual contact, promoting better hygiene.
- **IoT Integration:** Uses the ESP8266 Wi-Fi module to transmit data and trigger email alerts.

---

## 🎯 Objectives
1. **User Convenience:**
   - Automates lid operation.
   - Sends timely notifications to avoid overflowing bins.
2. **Hygiene Improvement:**
   - Reduces hand contact.
3. **Efficient Waste Management:**
   - Data collected helps optimize waste collection schedules.

---

## 🧩 Components Used
### Hardware
- Arduino Uno
- ESP8266 Wi-Fi module
- Ultrasonic sensors (2)
- 9g Servo motor
- LED bulb (optional)
- Breadboard
- Jumper wires (M-M, M-F)
- 9V battery
- Dustbin

### Software
- [Arduino IDE](https://www.arduino.cc/en/softwar)

---

## 📐 Circuit Diagram
![Circuit Diagram](https://github.com/varsha-2024-snu/smartbin/blob/main/arduino%20pin%20diagram.jpeg)  

---

## ⚙️ How It Works
1. **Lid Automation:**
   - An external ultrasonic sensor detects objects near the bin.
   - Activates a servo motor to open the lid automatically.
2. **Fill Level Monitoring:**
   - An internal ultrasonic sensor continuously measures the bin's fill level.
3. **Email Notification:**
   - When the bin is 80% full, the ESP8266 module sends an email alert to the user.

---

## 🚀 Getting Started
### Prerequisites
- Arduino IDE installed.
- Email service account (configured in ESP8266 code).

### Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/smart-bin.git
2. Open the Arduino IDE and upload the code to your Arduino Uno.
3. Assemble the circuit as per the diagram provided.
4. Configure the Wi-Fi credentials and email details in the ESP8266 code.

## 🔍 Testing and Calibration
1. Test the automatic lid opening by bringing an object near the external ultrasonic sensor.
2. Simulate the bin filling by adjusting the internal ultrasonic sensor.
3. Verify email alerts by observing notifications when the bin reaches 80% capacity.
