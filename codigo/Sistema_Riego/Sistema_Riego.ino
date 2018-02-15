/*
 * Sensor Humedad  A0
 * Rele             8
 * 
 * 
 */

#define RELE_PIN 8

int Umbral_humedad=500;

void setup() {
  Serial.begin(9600);
  pinMode(RELE_PIN,OUTPUT);
}
void loop() {
  int humedad=analogRead(A0);  // entre 0 y 1023
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
