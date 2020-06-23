#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("hello, world!");
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  if(Serial.available())
  {
    delay(100);
    lcd.clear();
  lcd.setCursor(2, 1);
    while(Serial.available()>0)
    {
      lcd.print(Serial.readString());
    }
  
  }
}