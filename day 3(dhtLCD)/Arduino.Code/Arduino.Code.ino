#include <DHT.h>
#include <LiquidCrystal_I2C.h>
#define DHTPIN 2 
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x20,16,2);
void setup() {
  dht.begin();
  lcd.init();
}
void loop() {
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Humidity = ");
  lcd.print((float)dht.readHumidity());
  lcd.print(" %");
  lcd.setCursor(0,1);
  lcd.print("Temper = ");
  lcd.print((float)dht.readTemperature());
  lcd.print(" C");
  delay(1000);
}