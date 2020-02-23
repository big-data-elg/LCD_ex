# LCD_ex
LiquidCrystal_I2C Hello World

## wiring
![wire](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2018/07/esp8266_LCD.png?w=1599&ssl=1)

```cpp
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
```
