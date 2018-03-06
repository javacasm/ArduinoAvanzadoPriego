#define PIN_PULSADOR   2
#define PIN_LED_R      8
#define PIN_LED_V      9

void setup() {
  pinMode(PIN_PULSADOR,INPUT);
  pinMode(PIN_LED_V,OUTPUT);
  pinMode(PIN_LED_R,OUTPUT);
}

void loop() {
 if( digitalRead(PIN_PULSADOR) == HIGH ){
     digitalWrite(PIN_LED_R,LOW);
     digitalWrite(PIN_LED_V,HIGH);
     delay(4000);
     digitalWrite(PIN_LED_V,LOW);
     digitalWrite(PIN_LED_R,HIGH);
   }
}







