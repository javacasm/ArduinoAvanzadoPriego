#define PIN_PULSADOR 2
#define PIN_LED      11  // const int led_PIN = 13;

void setup() {
  pinMode(PIN_PULSADOR,INPUT);
  pinMode(PIN_LED,OUTPUT);
}

void loop() {
  if( digitalRead(PIN_PULSADOR) == HIGH ){
     digitalWrite(PIN_LED,HIGH);
     delay(200);
     digitalWrite(PIN_LED,LOW);
     delay(200);
  }
}
