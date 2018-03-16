#include <SimpleDHT.h>

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display


int pinDHT22 = D2;
SimpleDHT22 dht22;

void setup() {
  Serial.begin(9600);

  lcd.init();
  // Print a message to the LCD.
  lcd.backlight();
}

void loop() {
 byte temperature = 0;
  byte humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read(pinDHT22, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT22 failed, err="); Serial.println(err);delay(1000);
    return;
  }

  Serial.print("Sample OK: ");
  Serial.print((int)temperature); Serial.print(" *C, ");
  Serial.print((int)humidity); Serial.println(" H");

  lcd.setCursor(0,0);  // (x,y)
  lcd.print("Humedad:");
  lcd.print((int)humidity);

  lcd.setCursor(0,1);  // (x,y)
  lcd.print("Temperatura:");
  lcd.print((int)temperature);

  delay(1500);
}
