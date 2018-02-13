# Arduino Avanzado Priego

CEP Priego-Montilla

Febrero-Abril de 2018

José Antonio Vacas @javacasm

## https://github.com/javacasm/ArduinoAvanzadoPriego

# Calendario

## Sesión 1 13-Febrero
* Repaso de programación y electrónica
  * [Contenido del kit](https://www.prometec.net/producto/kit-inicio/)
  * Leds ([digital](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/programacion.md#sem%C3%A1foro) y [PWM](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/programacion.md#salidas-anal%C3%B3gicas))
  * [Pulsadores](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/programacion.md#detectar-una-pulsaci%C3%B3n) y [sensores](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/programacion.md#medidas-con-sensores)
  * [Modelos de Arduino](./Repaso/ComparacionHardware.pdf)
  * [Simuladores](./Repaso/3.5_Simuladores.pdf)
  * Diseño de circuitoscon [Fritzing](./Repaso/Fritzing.pdf)
  * [Entorno de programación](./IDES.md)
  * Materiales de Repaso  
    * [Introducción a la electrónica](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/0.4_IntroduccionElectr%C3%B3nica.pdf)
    * [Introducción a la programación](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/1.1.1_IntroduccionProgramacion.pdf)
    * [Montajes básicos](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/1.1.3_IntroduccionMontajes.pdf)
* Programación avanzada
    * [Programación C++ avanzada](./Repaso/1.2.3_ProgramacionAvanzadaCavanzado.pdf)
      * [Proceso de compilación](ProcesoCompilación/README.md)
      * [Proyectos con varios ficheros](ProyectoVariosFicheros/README.md)
    * Interrupciones [Hardware](./Repaso/2.1.3_InterrupcionesHardware.pdf) y [Software](./Repaso/1.2.2_ProgramacionAvanzadaInterrupcionesSoftware.pdf)
    * [Manejo de puertos en parelelo](./Repaso/1.2.1_ProgramacionAvanzadaPuertos.pdf) (Registros)
    * [Librerías](./Repaso/1.2.4_ProgramaciónAvanzadaLibrerías.pdf)
### Prácticas:
  Semáforo con pulsador para activación. Regulación de duración con potenciómetros
  Scanner Larson (8 leds) usando Registros


## Sesión 2 19-Febrero
* Uso de display:
  * [LCD](./Repaso/2.1.6_DisplayLCD.pdf)
  * 7 segmentos (usando registro de desplazamiento 595)
* Lectura de sensores:
  * Sensores de humedad y temperatura ([DHT](./Repaso/DHT.pdf))
  * Sensores de lluvia/humedad
  * Sensores de llama
  * Sensores de temperatura ([LM35](./Repaso/LM35.pdf))
  * Material de consulta
    * [Montajes y tipos de Sensores](https://github.com/javacasm/ArduinoAvanzadoPriego/blob/master/Repaso/Sensores.pdf)
* [Control con Infrarrojos](./Repaso/3.7_Infrarrojos.pdf)
* Lectura de [tiempos (RTC)](./Repaso/4.2_RTC.pdf)

### Prácticas:
  * Estación meteorológica
  * Control de la visualización de 7 segmentos via Infrarrojos


## Sesión 3 5-Marzo
* Control de potencia usando Reles
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
