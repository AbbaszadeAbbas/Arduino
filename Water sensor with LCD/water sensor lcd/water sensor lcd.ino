#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2); 
 
int resval = 0;  
int respin = A3; 
  
void setup() { 

  lcd.begin(16, 2); 
  
  lcd.print("  WATER LEVEL : "); 
} 
  
void loop() {
  lcd.setCursor(0, 1); 
    
  resval = analogRead(respin); 
   
  if (resval<=100){ lcd.println("     Empty    "); } 
  else if (resval>100 && resval<=300){ lcd.println("       Low      "); }
  else if (resval>300 && resval<=330){ lcd.println("     Medium     "); } 
  else if (resval>330){ lcd.println("      High      "); }
  delay(1000); 
}