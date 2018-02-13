#include <BitbloqUS.h>

// Definimos los  pines

#define motor1_velocidad  11    //  EnA
#define motor1_adelante    7    //  In1
#define motor1_atras      8     //  In2
#define motor2_adelante   12    //  In3
#define motor2_atras      10    //  In4
#define motor2_velocidad  9     //  EnB

#define sensorIRSuelo     6
#define sensorUSTrigger   4
#define sensorUSEcho      5

#define DIR_FORWARD       1
#define DIR_BACKWARD      0

#define VEL_MAX           255
#define VEL_MED           200

void setup() {
  // Fundamental!!! ACTIVAR LAS PATILLAS DE CONTROL DE LOS MOTORES COMO SALIDAS
  pinMode(motor1_adelante,OUTPUT);
  pinMode(motor1_atras,OUTPUT);
  pinMode(motor2_adelante,OUTPUT);
  pinMode(motor2_atras,OUTPUT);

  // Sensores
  pinMode(sensorIRSuelo,INPUT);
  pinMode(sensorUSTrigger,OUTPUT);
  pinMode(sensorUSEcho,INPUT);

  Serial.begin(9600);
}



void atras()
{
  Serial.println("Atras");
  // motor 1 en dirección adelante
  digitalWrite(motor1_adelante,HIGH);
  digitalWrite(motor1_atras,LOW);

  // motor 2 en dirección adelante
  digitalWrite(motor2_adelante,HIGH);
  digitalWrite(motor2_atras,LOW);
}


void adelante()
{
  Serial.println("Adelante");
  // motor 1 en dirección atras
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,HIGH);

  // motor 2 en dirección atras
  digitalWrite(motor2_adelante,LOW);
  digitalWrite(motor2_atras,HIGH);
}

void derecha()
{
  Serial.println("Derecha");
  // motor 1 en dirección atras
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,HIGH);

  // motor 2 en dirección adelante
  digitalWrite(motor2_adelante,HIGH);
  digitalWrite(motor2_atras,LOW);
}

void izquierda()
{
  Serial.println("Izquierda");
  // motor 2 en dirección atras
  digitalWrite(motor2_adelante,LOW);
  digitalWrite(motor2_atras,HIGH);

  // motor 1 en dirección adelante
  digitalWrite(motor1_adelante,HIGH);
  digitalWrite(motor1_atras,LOW);
}


void parar()
{
  Serial.println("Parar");
  // motor 1 parado
  digitalWrite(motor1_adelante,LOW);
  digitalWrite(motor1_atras,LOW);

  // motor 2 parado
  digitalWrite(motor2_adelante,LOW);
  digitalWrite(motor2_atras,LOW);
}

int dv=-20; // Los motores se mueven a la misma velocidad
void velocidad(int v)
{
  Serial.print("Velocidad=");
  Serial.println(v);

  // Si apreciamos que el robot avanza curvado podemos calibrarlos con
  // valores pequeños positivos o negativos de dv
  analogWrite(motor1_velocidad,v+dv);
  analogWrite(motor2_velocidad,v);
}


// Usa un sensor Infrarrojo para ver si hay o no suelo
// Debe estar en la parte delantera del robot
int haySuelo()
{
  int resultado=0;
  if(digitalRead(sensorIRSuelo)==HIGH) // Detectamos el suelo
  {  resultado=1; }
  else
  {  resultado=0;}

  //return resultado;
  return true;
}


US ultrasonidos_0(4, 5);

float mideDistancia()
{
  float Distancia = ultrasonidos_0.read();
  Serial.println(Distancia);

  return Distancia;
}

// Mide la distancia usando el sensor de Ultrasonidos HC-SR04 o similar
long mideDistanciaRaw()
{
  // Basado en http://randomnerdtutorials.com/complete-guide-for-ultrasonic-sensor-hc-sr04/
  // Mejor usar la librería newPing https://bitbucket.org/teckel12/arduino-new-ping/wiki/Home
  digitalWrite(sensorUSTrigger,LOW);   // paramos el ultrasonido
  delayMicroseconds(5);
  digitalWrite(sensorUSTrigger,HIGH);  // Lanzamos el ultrasonido
  delayMicroseconds(10);                // esperamos 200 microsegundos
  digitalWrite(sensorUSTrigger,LOW);   // paramos el ultrasonido

  long tiempoRebote=pulseIn(sensorUSEcho,HIGH);  // Medimos el tiempo hasta que se detecte el rebote
  long cm=((tiempoRebote/2.0)*340.0)/1000000.0; // Dividimos por 2 (es ida y vuelta)
  Serial.println(tiempoRebote);
  return cm;
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
