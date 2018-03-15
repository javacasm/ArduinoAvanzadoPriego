#include "Reles.h"
#include <Arduino.h>

void setup_reles(){
    pinMode(RELE_1, OUTPUT); 
    pinMode(RELE_2, OUTPUT); 
}


void apagaRele(int pinRele){
    digitalWrite(pinRele, LOW);
}

void enciendeRele(int pinRele){
    digitalWrite(pinRele, HIGH);
}

