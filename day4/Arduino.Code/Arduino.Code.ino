#include <LiquidCrystal_I2C.h>
#include <Wire.h>
#define pot A0

LiquidCrystal_I2C lcd1(0x27,16,2);
LiquidCrystal_I2C lcd2(0x20,16,2);

int in1 = 9,in2 = 10, in3 = 11, in4 = 12, enA = 6, enB = 8;
int potValue = 0, mapValue = 0;

void setup() {
  for(int i = 7;i<13;i++){
    pinMode(i, OUTPUT);
  }
  lcd1.init();
  lcd1.backlight();
  lcd2.init();
  lcd2.backlight();
  lcd1.setCursor(3, 0);
  lcd1.print("Welcome");
  lcd2.setCursor(3, 0);
  lcd2.print("Welcome");
  lcd1.setCursor(1,1);
  lcd1.print("Sumqayit");
  lcd2.setCursor(1,1);
  lcd2.print("Sumqayit");
  delay(3000);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void loop() {
  potValue = analogRead(pot);
  mapValue = map(potValue, 0, 1023, 0, 255);
  updateMapValue = map(mapValue, 0, 255, 0, 100);
  analogWrite(enA, mapValue);
  analogWrite(enB, mapValue);
}
