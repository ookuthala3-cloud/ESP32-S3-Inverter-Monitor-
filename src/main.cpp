#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  Serial.begin(115200);
  
  tft.init();
  tft.setRotation(0); 
  tft.fillScreen(TFT_BLACK); 
  
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("ESP32 Ready!", 10, 10, 2);
}

void loop() {
  delay(1000);
}
