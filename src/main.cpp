#include <Arduino.h>
#include <LiquidCrystal_I2C.h> 
//https://kocoafab.cc/tutorial/view/727

#define LCD_I2CADDR 0x3f
LiquidCrystal_I2C lcd(LCD_I2CADDR, 16, 2);

void setup() {

  lcd.begin();
  lcd.print(F("Hello world")); 
}

void loop() {
}