#include <DFRobot_RGBLCD1602.h>
DFRobot_RGBLCD1602 lcd(0x3E ,16 ,2);
void setup() {
lcd.init();
lcd.print("WELCOME TO SAFARI");
lcd.setCursor(2,2);
lcd.setCursor(6,2);
lcd.print("PARK HOTEL");
}
void loop() {
  lcd.setCursor(0,1);
  lcd.scrollDisplayLeft();
  delay(300);
}
