## Introducción teorica

En este trabajo vamos a utilizar la funcion *millis*, la cual lleva la cuenta de tiempo que nuestro arduino ha estado ejecutandose en milisegundos. Normalmente utilizabamos la función delay() pero aunque es practico en ocasiones resulta limitador. 

Cuando el arduino utiliza la funcion de delay, congela el estado del arduino durante la duracion del delay, lo que impide que haya alguna entrada o salida en ese intervalo de tiempo. En cambio la funcion Millis soluciona ese problema. Lleva la cuenta de cuanto tiempo ha estado ejecutandose nuestro arduino en milisegundos. 

Un int (numero entero) es un numero de 16 bits y contiene valores de entre -32.768 y 32.767

Pueden parecer numeros grandes pero si el arduino cuenta 1000 veces por segundo con la funcion Millis, se quedaria sin espacio en menos de un minuto. EL tipo de datos largo contiene un numero de 32 bits entre -2.147.483.648 y 2.147.438.647

## Montaje

![kkkk](https://github.com/Mikeey666/1er-trimestre/blob/main/IMG-20220112-WA0007.jpeg?raw=true)

[Codigo del reloj de arena](https://github.com/Mikeey666/ARDUINO/blob/3eb2dc0c1af7db11492f205b728cdef9d84d2e7a/reloj_de_arena_digital.ino)

[variacion de sonido](https://github.com/Mikeey666/ARDUINO/blob/f0145fa5ab05b8931c8725cd619757ae9e264ae1/reloj_de_arena_digital_variacion.ino)

En esta variacion hemos agregado un altavoz para que al finalizar el reloj de arena suene una cancion a eleccion. En este caso, un villancico.
