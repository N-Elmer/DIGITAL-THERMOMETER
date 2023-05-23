# DIGITAL-THERMOMETER
TEMPERATURE MEASUREMENT 🌡🌡 AND DISPLAY SYSTEM

This project is a digital thermometer that measures and displays temperature readings using temperature sensors and an LCD display. It is implemented using Arduino C++.

## Folder Structure

📂 Digital_Thermometer
   |
   ├── 📂 Libraries
   │     ├── ⚙️ LiquidCrystal_I2C.h
   │     └── ⚙️ OneWire.h
   │   
   ├── 📂 Sensors
   │     ├── ⚙️ DS18B20.h
   │     └── ⚙️ DHT.h
   │   
   ├── ⚙️ DigitalThermometer.ino
   └── ⚙️ README.md

The project folder structure consists of the following files and directories:

- **Libraries**: This directory contains the necessary libraries for the project.
  - ⚙️ LiquidCrystal_I2C.h: Library for communication with the LCD display using the I2C interface.
  - ⚙️ OneWire.h: Library for communication using the OneWire protocol.
  
- **Sensors**: This directory contains the sensor libraries required for temperature measurement.
  - ⚙️ DS18B20.h: Library for reading temperature values from the DS18B20 temperature sensor.
  - ⚙️ DHT.h: Library for reading temperature and humidity values from the DHT sensor.
  
- ⚙️ DigitalThermometer.ino: The main Arduino file that contains the code for the digital thermometer.

- ⚙️ README.md: The documentation file explaining the project and its usage.

## Installation and Setup

To use this project, you will need the following components:

- Arduino board (e.g., Arduino Uno)
- DS18B20 temperature sensor
- DHT sensor
- LCD display with I2C interface

Follow these steps to set up the project:

1. Connect the DS18B20 temperature sensor to the Arduino board.
2. Connect the DHT sensor to the Arduino board.
3. Connect the LCD display to the Arduino board using the I2C interface.
4. Download and install the Arduino IDE from the official Arduino website.
5. Clone or download this project repository.
6. Open `DigitalThermometer.ino` file in the Arduino IDE.
7. Install the required libraries using the Arduino Library Manager or manually by placing them in the appropriate libraries folder.
8. Select the correct Arduino board and port in the Arduino IDE.
9. Upload the code to the Arduino board.
10. Monitor the temperature readings on the LCD display.

## Code Explanation

The `DigitalThermometer.ino` file contains the code for the digital thermometer. It initializes the LCD display, temperature sensor, and DHT sensor in the `setup()` function. In the `loop()` function, it reads temperature values from the DS18B20 sensor and temperature/humidity values from the DHT sensor. It then displays the temperature readings on the LCD display.

## Requirements

The following libraries are required for this project:

- LiquidCrystal_I2C
- OneWire
- DS18B20
- DHT

You can install these libraries using the Arduino Library Manager or by manually adding them to the libraries folder in your Arduino installation.

## Troubleshooting

If you encounter any issues or have trouble setting up the project, consider the following steps:

- Double-check the wiring connections between the components and the Arduino board.
- Ensure that the correct libraries are installed.
- Verify that the Arduino board and port are selected correctly in the Arduino IDE.
- Check the serial monitor for any error messages or unexpected behavior.

If the problem persists, feel free to seek assistance from the Arduino community or consult the official Arduino documentation.

##
