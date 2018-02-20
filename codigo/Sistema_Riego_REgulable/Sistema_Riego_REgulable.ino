/*
 * Sensor Humedad  A0
 * Rele             8
 * Potenciometro   A1
 *
 */

#define RELE_PIN 8
#define PIN_HUMEDAD A0
#define PIN_POTENCIOMETRO A1

int Umbral_humedad;

void setup() {
  Serial.begin(9600);
  pinMode(RELE_PIN,OUTPUT);
}
void loop() {
  Umbral_humedad = analogRead(PIN_POTENCIOMETRO);   // Valor humbral

  int humedad=analogRead(PIN_HUMEDAD);  // entre 0 y 1023
  Serial.println(humedad);
  if ( humedad < Umbral_humedad ){
      // se cumple
      digitalWrite(RELE_PIN,HIGH);   // Enciendo riego
  }
  else{
     // no se cumple
     digitalWrite(RELE_PIN,LOW);   // Apago riego
  }
  delay(100);

}
