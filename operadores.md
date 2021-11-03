
Digitalwrite es una función que nos pide un número de pin y el valor HIGH (1) o LOW (0).

- Si el valor es HIGH, la placa suministrará 5v en ese pin
- Si el valor es LOW, la placa suministrará 0v en ese pin
- Si hay 5v, se activaran los circuitos
- Si hay 0v, los circuitos no se activaran

##Ejercicio

Vamos a conectar 2 botones y 2 leds

Haremos diferentes programas con diferentes comportamientos. 
Para poner un botón necesitamos la resistencia de 10.000 ohmnios estas son las que tienen cuerpo beige y una linea naranja.

Para poner un led necesitamos una resistencia de 220 ohmnios, las del cuerpo azul. Hay que tener en cuenta la prioridad del led. La pata más corta va hacia el GND y la larga hacia el voltaje.

![link a la primera prueba](https://github.com/Mikeey666/ARDUINO/blob/78752f0f95022b1738978e29f7b552dbfd303154/operadores_prueba_1.ino)

En esta primera prueba hemos conectado 2 botones y 2 leds, y los hemos programado para que cada led se encendiera o apagara dependiendo del botón que se estuviera pulsando.

![link al primer ejercicio](https://github.com/Mikeey666/ARDUINO/blob/24f5a4600266adbf50091f47cad4e4529b66de5b/operadores_ejercicio_1.ino)

En este primer ejercicio hemos conectado de nuevo 2 botones y 2 leds. Pero a diferencia de la primera prueba, los hemos programado para que ambos leds se encendieran SOLO si se pulsaban los dos botones al unísono

![link al segundo ejercicio](https://github.com/Mikeey666/ARDUINO/blob/3c565052ce2e49927292cc4bab2b11afffed3351/operadores_ejercicio_2.ino)

Aqui simplemente hemos cambio los && por ||, haciendo que los leds se enciendan al pulsar cualquier botón, sea de forma individual o al mismo momento.

![link al tercer ejercicio](https://github.com/Mikeey666/ARDUINO/blob/08d1355d4fc340ddf5a16da7e81102877df8aaef/operadores_ejercicio_3.ino)

Al contrario de los ejercicios anteriores, esta vez hemos utilizado un operador que nos permite realizar la acción contraria de lo que queríamos hacer. ANtes encendiamos los leds al pulsar los 2 botones, gracias a este operador en vez de encenderlos APAGAMOS los leds al pulsar los dos botones.
