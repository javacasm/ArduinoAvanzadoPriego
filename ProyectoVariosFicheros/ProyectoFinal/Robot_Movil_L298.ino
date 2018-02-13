

#include "vehiculo.h"
#include "globales.h"



void setup() {

  setup_vehiculo();

  Serial.begin(9600);
}





void test()
{
  velocidad(VEL_MAX);
  while(1)
  {
    adelante();
    delay(3000);
    atras();
    delay(3000);
  }

}

void loop() {



 //test(); // Test sin fin

  // put your main code here, to run repeatedly:
  if(haySuelo())
  {
    float Distancia=mideDistancia();
      if(Distancia>100)
      {
        velocidad(VEL_MAX);
        adelante();
      }
      else
      {
        if(Distancia>15)
        {
          velocidad(VEL_MED);
          adelante();
        }
        else
        {
          derecha();
          delay(500);
        }
      }

  }
  else  // Si no hay suelo paramos y volvemos hacia atrás
  {
      parar();
      atras();
      delay(1000);
      derecha();
      delay(300);
  }
}
