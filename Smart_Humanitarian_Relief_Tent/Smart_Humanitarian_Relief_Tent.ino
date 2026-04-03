#include <OneWire.h>
#include <DallasTemperature.h>
#include <Servo.h>

// Pins
#define TEMP_PIN 3
#define RELAY_PIN 2
#define SERVO_PIN 4
#define RAIN_PIN 5

//Objects 
OneWire oneWire(TEMP_PIN);
DallasTemperature sensors(&oneWire);
Servo roofServo;

//Variables 
float temperature;

void setup() {
  Serial.begin(9600);

  sensors.begin();

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN,LOW);  // relay is off by default   (Active  HIGH)

  pinMode(RAIN_PIN, INPUT);

  roofServo.attach(SERVO_PIN);
  roofServo.write(0);  
}

void loop() {
  // Heat Reading   
  sensors.requestTemperatures();
  temperature = sensors.getTempCByIndex(0);

  Serial.print("Temperature: ");
  Serial.println(temperature);

  // Control the heater 
  if (temperature < 30) {
    digitalWrite(RELAY_PIN, HIGH);   // Tern on the heater
    Serial.println("Heater ON");
  }
  else if (temperature >= 50) {
    digitalWrite(RELAY_PIN, LOW );  // Tern off the heater 
    Serial.println("Heater OFF");
  }

  // Rain Sensor
  int rainState = digitalRead(RAIN_PIN);

  if (rainState == LOW) {   // On rain
    roofServo.write(90);    // Open the cover
    Serial.println("Rain detected - Roof Open");
  } else {
    roofServo.write(0);     // Close the cover
  }

  delay(2000);
}