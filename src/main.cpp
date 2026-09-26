#include <Arduino.h>
#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI(); 

void setup() {
  Serial.begin(115200);
  
  // LCD စတင်ခြင်း
  tft.init();
  tft.setRotation(0); 
  tft.fillScreen(TFT_BLACK); 
  
  // စာသားရေးသားခြင်း
  tft.setTextColor(TFT_WHITE, TFT_BLACK);
  tft.drawString("ESP32 Monitor Ready!", 10, 10, 2);
}

void loop() {
  delay(1000);
}
