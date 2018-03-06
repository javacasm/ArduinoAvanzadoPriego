void setup()
{
  Serial.begin(9600);
}

void loop()
{
  for(int r=0; r < 256 ; r = r + 25){
    for(int g=0; g < 256 ; g += 25){
         for(int b=0; b < 256 ; b += 25){
           analogWrite(11,r);  // LED ROJO
           analogWrite( 9,g);  // LED VERDE
           analogWrite(10,b);  // LED AZUL
           delay(1);
           Serial.print(r);
           Serial.print(" ");
           Serial.print(g);
           Serial.print(" ");
           Serial.println(b);
      }
    }
  }
}
