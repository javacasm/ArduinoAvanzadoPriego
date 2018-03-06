const int  led_pin = 11;
int estado = LOW ;

void setup() {
pinMode(led_pin,OUTPUT);
// configuramos interrupcion
attachInterrupt(0 ,parpadeo , CHANGE  ); // Pin 2
}

void loop() {
   digitalWrite(led_pin , estado);
}

// Funcion que se llamara en la interrupcion
void parpadeo(){
  if(estado == HIGH ) {  // estado = !estado;
    estado = LOW ;
  } else {
    estado = HIGH; 
  }
}










