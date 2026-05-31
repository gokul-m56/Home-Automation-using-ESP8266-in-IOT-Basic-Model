# Home Automation Control Using IoT (ESP8266 + Blynk)

## Overview

This project is an IoT-based Home Automation System developed using the ESP8266 NodeMCU and the Blynk platform. It allows users to remotely control up to five electrical loads (lights, fans, appliances, etc.) through the Blynk mobile application over Wi-Fi.

## Features

* Remote control of 5 loads using Blynk App
* Real-time ON/OFF status updates
* Wi-Fi based communication
* ESP8266 NodeMCU controller
* Easy to expand for additional devices
* User-friendly mobile dashboard

## Hardware Requirements

* ESP8266 NodeMCU
* 5-Channel Relay Module
* Wi-Fi Network / Mobile Hotspot
* Power Supply
* Electrical Loads (LEDs, Lamps, etc.)

## Software Requirements

* Arduino IDE
* ESP8266 Board Package
* Blynk Library
* Blynk IoT Account

## Pin Configuration

| Device | ESP8266 Pin |
| ------ | ----------- |
| Load 1 | D0          |
| Load 2 | D1          |
| Load 3 | D3          |
| Load 4 | D5          |
| Load 5 | D6          |

## Blynk Virtual Pins

| Virtual Pin | Function               |
| ----------- | ---------------------- |
| V1          | Load 1 Control         |
| V2          | Load 2 Control         |
| V3          | Load 3 Control         |
| V4          | Load 4 Control         |
| V5          | Load 5 Control         |
| V8          | Status Message Display |

## Working Principle

1. ESP8266 connects to the configured Wi-Fi network.
2. Blynk Cloud establishes communication with the NodeMCU.
3. User controls loads through the Blynk mobile application.
4. Commands are received on virtual pins (V1–V5).
5. Corresponding relay/output pins are switched ON or OFF.
6. Device status is displayed on the Blynk dashboard using Virtual Pin V8.

## Code Description

### Wi-Fi Connection

The ESP8266 connects to the configured Wi-Fi hotspot using:

```cpp
WiFi.begin(ssid, pass);
```

### Blynk Connection

```cpp
Blynk.begin(auth, ssid, pass);
```

### Load Control

Each virtual pin controls one load:

```cpp
BLYNK_WRITE(V1)
{
   int val = param.asInt();
   digitalWrite(led1, val);
}
```

Similar functions are implemented for V2, V3, V4, and V5.

## Applications

* Smart Home Automation
* Remote Light Control
* Energy Saving Systems
* IoT Learning Projects
* Smart Office Automation

## Future Enhancements

* Voice Control using Google Assistant
* MQTT Integration
* Energy Monitoring
* Firebase Cloud Logging
* Scheduling and Automation
* Mobile Notifications

## Author

Gokul M

## License

This project is developed for educational and learning purposes.
