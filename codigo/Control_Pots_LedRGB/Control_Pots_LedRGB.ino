void setup()
{
  Serial.begin(9600);
}

void loop()
{
 
  int iPotR = analogRead(A0);  // Entre 0 y 1023
  int iPotB = analogRead(A1);  // Entre 0 y 1023
  int iPotG = analogRead(A2);  // Entre 0 y 1023
  
  // Reescalamos a 0 -  255 (Rango PWM)
  
  int r = map(iPotR,0,1023,0,255);
  int g = map(iPotG,0,1023,0,255);
  int b = map(iPotB,0,1023,0,255);
  
  analogWrite(11,r);  // LED ROJO entre 0 y 255
  analogWrite( 9,g);  // LED VERDE
  analogWrite(10,b);  // LED AZUL

  Serial.print(r);
  Serial.print(" ");
  Serial.print(g);
  Serial.print(" ");
  Serial.println(b);
  delay(100);          

}
