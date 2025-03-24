# Smart Bin Project
An IoT-based smart bin solution using Arduino Uno and ESP8266 to enhance waste management by automating lid operation, monitoring fill levels, and sending email alerts when the bin is full.

---

## 🛠️ Features
- **Automatic Lid Opening:** Ultrasonic sensor detects approaching objects and opens the lid using a servo motor.
- **Fill Level Monitoring:** Tracks the bin's fill level using an internal ultrasonic sensor.
- **Email Alerts:** Sends a notification to a user-specified email address when the bin is 80% full.
- **Enhanced Hygiene:** Reduces manual contact, promoting better hygiene.
- **IoT Integration:** Uses the ESP8266 Wi-Fi module to transmit data and trigger email alerts.
- **Low Power Consumption:** Uses energy-efficient components to optimize battery life.

---

## 🎯 Objectives
### **User Convenience:**
- Automates lid operation.
- Sends timely notifications to avoid overflowing bins.

### **Hygiene Improvement:**
- Reduces hand contact, preventing the spread of germs.

### **Efficient Waste Management:**
- Helps optimize waste collection schedules with real-time fill level data.

---

## 🧩 Components Used
### **Hardware**
- Arduino Uno
- ESP8266 Wi-Fi module
- Ultrasonic sensors (2)
- 9g Servo motor
- LED bulb (optional)
- Breadboard
- Jumper wires (M-M, M-F)
- 9V battery
- Dustbin

### **Software**
- Arduino IDE
- ESP8266 Firmware
- SMTP Email Service for notifications

---

## 📐 Circuit Diagram
- **Arduino Circuit Diagram**
![image](https://github.com/user-attachments/assets/55fd0c4c-767d-481f-b663-212e36abb66a)

- **ESP Circuit Diagram**
![image](https://github.com/user-attachments/assets/01d83b40-7089-4c96-a6be-01eca54e7e89)


---

## ⚙️ How It Works
### **Lid Automation:**
1. An external ultrasonic sensor detects objects near the bin.
2. Activates a servo motor to open the lid automatically.

### **Fill Level Monitoring:**
1. An internal ultrasonic sensor continuously measures the bin's fill level.
2. When the bin reaches 80% capacity, the system triggers an alert.

### **Email Notification:**
1. The ESP8266 module connects to Wi-Fi.
2. Sends an email alert when the bin reaches the threshold.

---

## 🚀 Getting Started
### **Prerequisites**
- Install Arduino IDE.
- Set up an email service account (configured in ESP8266 code).

### **Installation**
1. Clone the repository:
   ```bash
   git clone https://github.com/your-username/smart-bin.git
   ```
2. Open the Arduino IDE and upload the code to your Arduino Uno.
3. Assemble the circuit as per the provided diagram.
4. Configure the Wi-Fi credentials and email details in the ESP8266 code.

---

## 🔍 Testing and Calibration
- **Test Lid Automation:** Bring an object near the external ultrasonic sensor and observe lid movement.
- **Simulate Fill Level:** Adjust the internal ultrasonic sensor’s position to simulate bin filling.
- **Verify Email Alerts:** Ensure an email notification is received when the bin reaches 80% capacity.

---

## 🛠️ Future Improvements
- **Mobile App Integration:** Display bin status in real-time on a mobile app.
- **Machine Learning for Waste Analytics:** Analyze usage patterns to optimize waste collection schedules.
- **Solar-Powered System:** Implement solar panels for sustainable energy use.
- **Multiple Bin Support:** Extend system to monitor multiple bins in different locations.

---

## 📜 License
This project is open-source under the [MIT License](LICENSE).

---
