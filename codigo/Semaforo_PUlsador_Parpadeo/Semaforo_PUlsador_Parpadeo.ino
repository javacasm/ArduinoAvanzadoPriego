#define PIN_PULSADOR   2
#define PIN_LED_R      8
#define PIN_LED_V      9

void setup() {
  pinMode(PIN_PULSADOR,INPUT);
  pinMode(PIN_LED_V,OUTPUT);
  pinMode(PIN_LED_R,OUTPUT);
}

void loop() {
  int duracion_parpadeo = 1000 ;
  int numero_parpadeo = 50;
  if( digitalRead(PIN_PULSADOR) == HIGH ){
     digitalWrite(PIN_LED_R,LOW);
     digitalWrite(PIN_LED_V,HIGH);
     delay(4000);
     for(int i = 0 ; i < numero_parpadeo ; i = i + 1 ){
        int duracion_espera = duracion_parpadeo / (numero_parpadeo * 2);
        digitalWrite(PIN_LED_V,LOW);
        delay(duracion_espera);
        digitalWrite(PIN_LED_V,HIGH);
        delay(duracion_espera);
     }
     digitalWrite(PIN_LED_V,LOW);
     digitalWrite(PIN_LED_R,HIGH);
   }
}







