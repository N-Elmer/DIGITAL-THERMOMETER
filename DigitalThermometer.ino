#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <OneWire.h>
#include <DS18B20.h>
#include <DHT.h>

// LCD display configuration
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Temperature sensor configuration
OneWire oneWire(2);  // OneWire data pin connected to digital pin 2
DS18B20 temperatureSensor(&oneWire);

// DHT sensor configuration
#define DHTPIN 3  // DHT data pin connected to digital pin 3
#define DHTTYPE DHT11  // DHT sensor type
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  // Initialize the LCD display
  lcd.begin(16, 2);
  lcd.print("Digital Thermometer");

  // Initialize the temperature sensor
  temperatureSensor.begin();

  // Initialize the DHT sensor
  dht.begin();
}

void loop() {
  // Read temperature from the DS18B20 sensor
  float temperatureDS18B20 = temperatureSensor.readTemperature();

  // Read temperature and humidity from the DHT sensor
  float temperatureDHT = dht.readTemperature();
  float humidityDHT = dht.readHumidity();

  // Display temperature readings on the LCD
  lcd.setCursor(0, 1);
  lcd.print("Temp: ");
  lcd.print(temperatureDS18B20);
  lcd.print(" C");

  // Delay for a second
  delay(1000);
}
