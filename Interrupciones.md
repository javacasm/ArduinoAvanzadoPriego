# Interrupciones

Las interrupciones son un recurso de los modernos procesadores que permiten detener la ejecución del programa principal para atender un evento (suceso) determinado, realizar algunas acciones y luego retomar la ejecución del programa principal por el punto en el que se detuvo.

De esta manera podemos hacer nuestro programa más simple, programando de forma independiente las reacciones a determinados eventos.

Para ellos crearemos una función que se encargará de realizar el procesamiento de este evento y que tendrá el siguiente formato:

    void funcionInterrupcion(){
    // Código de procesamiento de la interrupcion
    }

El código de estas funciones debe ser lo más breve posible ya que mientras el se procesa una interrupción no se atienden otras tareas que el micro debe hacer (como controlar las señales pwm, de servos, medir el tiempo, etc) Por tanto dentro del código de estas funciones está desaconsejado usar métodos como delay y los relacionados con el envío de datos vía Serial

Estos eventos pueden estar originados por el hardware (cambios en el estado de algún pin) o por un temporizador (parecido a una alarma) que llamaremos de tipo Software
