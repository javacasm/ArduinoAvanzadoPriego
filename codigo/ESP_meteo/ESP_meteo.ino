

#include <SimpleDHT.h>

#include <Wire.h>
#include <LiquidCrystal_I2C_ESP.h>

LiquidCrystal_I2C_ESP lcd(0x27, 16, 2);

// for DHT22, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: D2
int pinDHT22 = D2;
SimpleDHT22 dht22;

void setup() {
    // initialize the LCD
  lcd.begin(D3,D4);  // sda=0 | D3, scl=2 | D4

  // Turn on the blacklight and print a message.
  lcd.backlight();
  Serial.begin(115200);
}

void loop() {
  // start working...
  Serial.println("=================================");
  Serial.println("Sample DHT22...");
  
  // read without samples.
  // @remark We use read2 to get a float data, such as 10.1*C
  //    if user doesn't care about the accurate data, use read to get a byte data, such as 10*C.
  float temperature = 0;
  float humidity = 0;
  int err = SimpleDHTErrSuccess;
  if ((err = dht22.read2(pinDHT22, &temperature, &humidity, NULL)) != SimpleDHTErrSuccess) {
    Serial.print("Read DHT22 failed, err="); Serial.println(err);delay(2000);
    return;
  }
  
  Serial.print("Sample OK: ");
  Serial.print((float)temperature); Serial.print(" *C, ");
  lcd.setCursor(0,0);
  lcd.print("Temperatura:");
  lcd.print((float)temperature);
  Serial.print((float)humidity); Serial.println(" RH%");
  lcd.setCursor(0,1);
  lcd.print("Humedad:");
  lcd.print((float)humidity);
  
  // DHT22 sampling rate is 0.5HZ.
  delay(2500);
}
