
#include <Arduino.h>  // no es necesario en los ficheros .ino (si en los cpp)
//#include <libreria.h>


#define verde 7
#define rojo  8

#define enciende(x) digitalWrite(x,HIGH)
#define apaga(x)    digitalWrite(x,LOW)


#define _DEBUG 1

void setup() {
  // put your setup code here, to run once:

  pinMode(verde,OUTPUT);
  pinMode(rojo,OUTPUT);


#ifdef _DEBUG
  Serial.begin(9600);
#endif
  
}

void loop() {
  // put your main code here, to run repeatedly:
#ifdef _DEBUG
  Serial.println("Verde");
#endif
  enciende(verde); // digitalWrite(verde,HIGH);
  apaga(verde);    // digitalWrite(verde,LOW);
#ifdef _DEBUG
  Serial.println("Rojo");
#endif
  enciende(rojo);  // digitalWrite(rojo,HIGH);
  apaga(rojo);     // digitalWrite(rojo,LOW);

}
