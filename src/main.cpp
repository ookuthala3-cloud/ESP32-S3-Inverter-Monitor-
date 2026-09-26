#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  Serial.println("ESP32-S3 Inverter Monitor Started!");
}

void loop() {
  Serial.println("System Running...");
  delay(1000);
}
