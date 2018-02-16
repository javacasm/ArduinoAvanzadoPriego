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


## Sesión 2 19-Febrero
* Led [PWM](./Repaso/programacion.md#salidas-anal%C3%B3gicas))
* [Pulsadores](/Repaso/programacion.md#detectar-una-pulsaci%C3%B3n)
* Uso de display:
  * [LCD](./Repaso/2.1.6_DisplayLCD.pdf)
  * 7 segmentos (usando registro de desplazamiento 595)
* Lectura de sensores:
  * Sensores de humedad y temperatura ([DHT](./Repaso/DHT.pdf))
  * Sensores de lluvia/humedad
  * Sensores de llama
  * Sensores de temperatura ([LM35](./Repaso/LM35.pdf))
  * Material de consulta
  * Programación avanzada
      * [Programación C++ avanzada](./Repaso/1.2.3_ProgramacionAvanzadaCavanzado.pdf)
        * [Proceso de compilación](ProcesoCompilación/README.md)
        * [Proyectos con varios ficheros](ProyectoVariosFicheros/README.md)
      * Interrupciones [Hardware](./Repaso/2.1.3_InterrupcionesHardware.pdf) y [Software](./Repaso/1.2.2_ProgramacionAvanzadaInterrupcionesSoftware.pdf)
      * [Manejo de puertos en parelelo](./Repaso/1.2.1_ProgramacionAvanzadaPuertos.pdf) (Registros)
      * [Librerías](./Repaso/1.2.4_ProgramaciónAvanzadaLibrerías.pdf)  
    * [Montajes y tipos de Sensores](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/Sensores.pdf)
* [Control con Infrarrojos](./Repaso/3.7_Infrarrojos.pdf)
* Lectura de [tiempos (RTC)](./Repaso/4.2_RTC.pdf)

### Prácticas:
  * Estación meteorológica
  * Semáforo con pulsador para activación.
  * Control de la visualización de 7 segmentos via Infrarrojos


## Sesión 3 5-Marzo
* [Control de potencia](./Repaso/ElectrónicaPotencia.pdf)
* Control de motores
  * [Motores CC](./Repaso/2.1.4_Motores.pdf)
  * [Paso a paso](./Repaso/stepper.md)
* [Lectura de tarjertas RFID](./RFid.md)


### Prácticas:
  * Control de motores via Infrarrojos

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
