int pin = 13;
volatile int estado = LOW;
void setup()
{
pinMode(pin, OUTPUT);
attachInterrupt(0, parpadeo, CHANGE);
}
void loop()
{
digitalWrite(pin, estado);
}
void parpadeo()
{
  detachInterrupt(0);
  estado = !estado;
  attachInterrupt(0, parpadeo, CHANGE);
}
