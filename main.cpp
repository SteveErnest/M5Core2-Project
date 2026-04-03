//If you like this project, consider starring on GitHub! ⭐

#include<Arduino.h>
#include <M5Core2.h>

void setup() {
  // Initialize M5Core2
  M5.begin();

  // Start Serial monitor
  Serial.begin(115200);

  // Clear screen and display a message
  M5.Lcd.fillScreen(BLACK);
  M5.Lcd.setTextColor(WHITE);
  M5.Lcd.setTextSize(2);
  M5.Lcd.setCursor(20, 50);
  M5.Lcd.println("Hello, M5Core2!");

  Serial.println("M5Core2 initialized successfully!");
}

void loop() {
  // Update button states
  M5.update();

  // Button A pressed
  if (M5.BtnA.wasPressed()) {
    M5.Lcd.fillScreen(BLUE);
    M5.Lcd.setCursor(20, 50);
    M5.Lcd.println("Button A Pressed");
    Serial.println("Button A Pressed");
  }

  // Button B pressed
  if (M5.BtnB.wasPressed()) {
    M5.Lcd.fillScreen(GREEN);
    M5.Lcd.setCursor(20, 50);
    M5.Lcd.println("Button B Pressed");
    Serial.println("Button B Pressed");
  }

  // Button C pressed
  if (M5.BtnC.wasPressed()) {
    M5.Lcd.fillScreen(RED);
    M5.Lcd.setCursor(20, 50);
    M5.Lcd.println("Button C Pressed");
    Serial.println("Button C Pressed");
  }

  delay(50); // small delay for stability
}
