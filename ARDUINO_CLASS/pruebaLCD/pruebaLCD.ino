#include <LiquidCrystal.h>
LiquidCrystal lcd(7,6,5,4,3,2);

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);


}

void loop() {
  lcd.print("   lcd tutorial  ");
  delay (4000);
  lcd.setCursor (0,1);
  }
