# Arduino Avanzado Priego

CEP Priego-Montilla

Febrero-Abril de 2018

José Antonio Vacas @javacasm

## https://github.com/javacasm/ArduinoAvanzadoPriego

# Calendario

## Sesión 1 13-Febrero
* Repaso de programación y electrónica
  * [Contenido del kit](https://www.prometec.net/producto/kit-inicio/)
  * Usando Leds como salidas [digitales](./Repaso/programacion.md#sem%C3%A1foro)
  * [Sensores](./Repaso/programacion.md#medidas-con-sensores)
  * [Simuladores](./Repaso/3.5_Simuladores.pdf)

* Materiales de Consulta  
  * [Introducción a la electrónica](./Repaso/0.4_IntroduccionElectr%C3%B3nica.pdf)
  * [Introducción a la programación](./Repaso/1.1.1_IntroduccionProgramacion.pdf)
  * [Montajes básicos](./Repaso/1.1.3_IntroduccionMontajes.pdf)
  * [Modelos de Arduino](./Repaso/ComparacionHardware.pdf)
  * Diseño de circuitos con [Fritzing](./Repaso/Fritzing.pdf)
  * [Entorno de programación](./IDES.md)

### Prácticas:
  * [Regulación de duración de parpadeo con potenciómetro](./codigo/Blink_pot/Blink_pot.ino)
![diseño](https://d10zxokiwapyap.cloudfront.net/circuits/6is9dUxHaNz-ecec58f7-35dc-4516-ae12-a31f52b4e9d0-snapshot-thumb?&s=d796c4086745ef0cdded47ea6e736cd6)

  * [Medida de humedad o salinidad](./codigo/Humedad_Saturacion_salina/Humedad_Saturacion_salina.ino)
  ![Humedad](./images/MedidaHumedadSalinidad_bb.png)
  * [Sistema de Riego](./codigo/Sistema_Riego/Sistema_Riego.ino)
  ![Sistema de riego](./images/SistemaRiego_bb.png)

### Tarea voluntaria

* Fijar el umbral de riego mediante un potenciómetro

  ![](./images/SistemaRiegoRegulable_bb.png)

* Ahora podemos hacer que el valor del potenciometro regule el [valor de disparo del riego](./codigo/Sistema_Riego_REgulable/Sistema_Riego_REgulable.ino)

* Una vez montado el circuito calibramos los valores de humedad, lo que nos dará un valor de lo que consideramos seco VALOR_SECO y húmedo VALOR_MOJADO. Además definiremos un valor de HISTERESIS que evitará que se produzcan Enciendos/Apagados de manera rápida e intermitente

[Codigo](./codigo/Sistema_Riego_REgulable_calibrado/Sistema_Riego_REgulable_calibrado.ino)


## Sesión 2 19-Febrero
* Control de brillo de le Led con  [PWM](./Repaso/programacion.md#salidas-anal%C3%B3gicas)

* Uso de display [LCD](./Repaso/2.1.6_DisplayLCD.pdf)
* [Librerías](./Repaso/1.2.4_ProgramaciónAvanzadaLibrerías.pdf)  
* Lectura de sensores:
  * Sensores de humedad y temperatura ([DHT](./Repaso/DHT.pdf))
* Material de consulta
  * [Montajes y tipos de Sensores](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/Sensores.pdf)
  * Sensores de temperatura ([LM35](./Repaso/LM35.pdf))


### Prácticas:
  * Ciclo de color con led RGB

  [Proyecto de tinkercad](https://www.tinkercad.com/things/2v5LHQa9nd1)

  ![LED RGB](./images/bucles_Color_LED_RGB.png)
  * Lectura de temperatura
    * Instalamos Libreria SimpleDHT  con el gestor de temperatura (Menu -> Programa -> Inclluir libreria -> Gestor Librerias)
    * Abrimos el  Ejemplo de la libreria "SimpleDHT" DHT11Default
    * Conectamos el sensor DHT11 segun la imagen
      ![Modulo DHT](./images/DHT11_Kit.jpg)
      (Cuidado con la velocidad del puerto serie que debe ser 9600)
  * Test de pantalla LCD I2C
    * Instalamos la libreria LiquidCrystal I2C
    * Abrimos el ejemplo de la libreria "LiquidCrystal I2C" HelloWorld
    * Cambiamos la direccion del LCD ( Puede ser 0x27 o 0x30 o 0x3F) (Podemos buscar el valor usando ["I2C Scanner"](./codigo/i2c_scanner/i2c_scanner.ino))
    * Conectamos el LCD
    * Ajustamos el contraste con el potenciómetro de la placa
  * Estación meteorológica
    * Mezclamos los 2 ejemplos usados, copiando a un tercero
     [Código](./codigo/Estacion_Meteorologica/Estacion_Meteorologica.ino)


### Tarea
Vamos a controlar el color de un led RGB con 3 potenciometros (en el kit tenemos 1 potenciometro y con el joystick podemos simular otros 2 (VrX y VrY))

[Proyecto en Tinkercad](https://www.tinkercad.com/things/48ZTGqClfOM)

![](./images/Control_Potenciometros_RGB.png)

[C'odigo](./codigo/Control_Pots_LedRGB/Control_Pots_LedRGB.ino)


## Sesión 3 5-Marzo
* [Pulsadores](/Repaso/programacion.md#detectar-una-pulsaci%C3%B3n)
* Programación avanzada
    * [Programación C++ avanzada](./Repaso/1.2.3_ProgramacionAvanzadaCavanzado.pdf)
      * [Proceso de compilación](ProcesoCompilación/README.md)
      * [Proyectos con varios ficheros](ProyectoVariosFicheros/README.md)
    * Interrupciones [Hardware](./Repaso/2.1.3_InterrupcionesHardware.pdf) y [Software](./Repaso/1.2.2_ProgramacionAvanzadaInterrupcionesSoftware.pdf)
    * [Manejo de puertos en parelelo](./Repaso/1.2.1_ProgramacionAvanzadaPuertos.pdf) (Registros)

* [Control de potencia](./Repaso/ElectrónicaPotencia.pdf)
* Control de motores
  * [Motores CC](./Repaso/2.1.4_Motores.pdf)
  * [Paso a paso](./Repaso/stepper.md)
* [Lectura de tarjertas RFID](./RFid.md)
* [Control con Infrarrojos](./Repaso/3.7_Infrarrojos.pdf)
* Lectura de [tiempos (RTC)](./Repaso/4.2_RTC.pdf)


### Prácticas:
  * Control de motores via Infrarrojos
  * Semáforo con pulsador para activación.
  * Control de la visualización de 7 segmentos via Infrarrojos

## Sesión 4 12-Marzo
* Introducción a Internet de las Cosas (IOT)
* Protocolos de envio de datos (REST, MQTT)
* Plataformas online ( Thingspeak, Thinger.io, etc.)
* Uso de placa wifi NodeMCU

### Prácticas
Adaptación al NodeMCU de la estación meteorológica con wifi con publicación online de datos

## Sesión 5 15-Marzo
* Repaso y ampliación de contenidos


## Sesión 6 10-Abril
* Puesta en común
