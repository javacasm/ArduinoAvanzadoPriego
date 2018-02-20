/*
 * Sensor Humedad  A0
 * Rele             8
 * Potenciometro   A1
 *
 */

#define RELE_PIN 8
#define PIN_HUMEDAD A0
#define PIN_POTENCIOMETRO A1

// Valore empiricos

#define VALOR_SECO 245
#define VALOR_MOJADO 856
#define HISTERESIS 50

int Umbral_humedad;

void setup() {
  Serial.begin(9600);
  pinMode(RELE_PIN,OUTPUT);
}
void loop() {
 // Umbral_humedad = analogRead(PIN_POTENCIOMETRO);   // Valor humbral

  int humedad=analogRead(PIN_HUMEDAD);  // entre 0 y 1023
  Serial.println(humedad);
  if ( humedad < (VALOR_MOJADO - HISTERESIS) ){
      // se cumple
      digitalWrite(RELE_PIN,HIGH);   // Enciendo riego
  }


  if (humedad > (VALOR_MOJADO + HISTERESIS)) {
     // no se cumple
     digitalWrite(RELE_PIN,LOW);   // Apago riego
  }

  if( humedad < VALOR_SECO ) {
    Serial.println("Sensor roto");
  }
  delay(100);

}
