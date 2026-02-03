# 🚨 Smoke Alert System – IoT (ESP8266)

An **IoT-based Smoke Alert System** built using **ESP8266** that detects smoke and sends **real-time alerts via the Blynk app and Email**.  
This system is designed for **early fire detection** to improve safety in homes and industrial environments.

---

## 📌 Project Overview

The Smoke Alert System continuously monitors air quality using a **smoke/gas sensor** connected to an **ESP8266 microcontroller**.  
When the smoke level exceeds a predefined threshold, the system immediately sends alerts through:
- 📱 **Blynk Mobile App**
- 📧 **Email Notification**

This ensures quick response and enhanced safety.

---

## ⚙️ Components Used

- ESP8266 (NodeMCU)
- Smoke / Gas Sensor (MQ series)
- Buzzer
- Jumper Wires
- Breadboard
- Power Supply

*(ESP8266 has built-in Wi-Fi, so no external Wi-Fi module is required)*

---

## 🧠 Working Principle

1. The smoke sensor continuously detects smoke or gas levels.
2. ESP8266 reads sensor values in real time.
3. When the smoke level crosses the safety threshold:
   - Buzzer is activated
   - Alert is sent to the **Blynk app**
   - Alert email is sent to the registered **Email ID**
4. The system keeps monitoring and updates continuously.

---

## 🖥️ Software & Tools

- Arduino IDE
- Embedded C / Arduino (.ino)
- Blynk IoT Platform
- Email Notification Service
- Git & GitHub

---

## 📂 Project Structure

smoke-detection-IOT/   
  │── smokeDetection.ino/   
     ├── smokeDetection.ino.ino   
  └── demo/   
     ├── circuit.jpg   
     ├── demo.mp4   
     ├── blynk.jpg   
     └── mail.jpg  
   
---

## 🚀 Applications

- Home fire alert systems
- Industrial smoke detection
- Smart buildings
- IoT-based safety and monitoring systems

---

## 🔮 Future Enhancements

- Real-time cloud dashboard
- SMS alert integration
- Historical data analysis
- AI-based smoke level prediction
- Automatic fire suppression integration

---

## 👩‍💻 Author

**Reeya Sharma**   

---

## ⭐ Support

If you find this project useful, please **give it a star ⭐ on GitHub**  
Contributions and suggestions are welcome!
