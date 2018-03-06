#define PIN_PULSADOR   2
#define PIN_LED_R      8
#define PIN_LED_V      9

void setup() {
  pinMode(PIN_PULSADOR,INPUT);
  pinMode(PIN_LED_V,OUTPUT);
  pinMode(PIN_LED_R,OUTPUT);
}

void loop() {
     digitalWrite(PIN_LED_V,LOW);
     digitalWrite(PIN_LED_R,HIGH);
     int duracion_rojo = 60000;
     int numero_iteraciones = 1000;
     for(int i = 0 ; i < numero_iteraciones ; i = i + 1 ){
       delay(duracion_rojo / numero_iteraciones);
       if (digitalRead(PIN_PULSADOR) == HIGH ){
          break;
       }
     }
     digitalWrite(PIN_LED_R,LOW);
     digitalWrite(PIN_LED_V,HIGH);
     delay(4000);
}







