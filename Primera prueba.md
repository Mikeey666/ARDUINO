## ARDUINO

Vamos a comprobar si podemos programar el arduino utilizando el programa Arduino IDE. 

El ejemplo que estamos utilizando para empezar es "Blink", consiste en apagar y encender la luz LED repetidamente, como un parpadeo. 

En la primera prueba, nos hemos dado cuenta de que el arduino no funciona. 

![kkk](https://raw.githubusercontent.com/Mikeey666/1er-trimestre/main/Captura%20de%20pantalla%20de%202021-10-06%2012-10-26.png)

## Revisar componentes electricos

Debido al error en la primera prueba del Arduino, ahora vamos a revisar componentes electricos, empezando con pequeñas luces LED. 

![a](https://github.com/Mikeey666/1er-trimestre/blob/main/Captura%20de%20pantalla%20de%202021-10-13%2010-48-36.png?raw=true)

**Circuito en paralelo:**

![b](https://github.com/Mikeey666/1er-trimestre/blob/main/Captura%20de%20pantalla%20de%202021-10-13%2010-56-14.png?raw=true)

**Circuito en serie:**

![c](https://github.com/Mikeey666/1er-trimestre/blob/main/Captura%20de%20pantalla%20de%202021-10-13%2010-59-57.png?raw=true)


# Cricuitos electricos

## Error de programación

¿Cuál fue el error que pasó el otro día? Era que no había permisos para escribir en el USB, entonces el programa AVR dude lanzó una excepción y detuvo el programa.

Esto ocurrió por un tema de permisos de usuario. En Linux existen 2 tipos de usuarios: los usuarios y los super usuarios. En Windows tenemos al usuario y al administrador. En los ordenadores del pfi los usuarios que utlizamos estan listados como usuarios, y por tanto no tienen permiso para hacer estas cosas que tienen más nivel.

## Primeros circuitos

+5v ------- LED 1 ------- -GND

Este pese a funcionar y dar luz genera 2 problemas:

1. Se calienta y es incómodo.
2. Puede fundir el LED.

+5v ---- LED 1 ---- LED 2 ---- -GND

En los circuitos en serie, si desconectamos una parte TODO se apaga. Mientras que en los circuitos en paralelo, da igual si se desconecta una parte ya que todo continúa igual.

+5v ---- LED 1 ---- BOTÓN ---- RESISTENCIA ---- -GND

## Apuntes sobre electricidad

Voltaje --> Altura (diferencia de potencial)

Intensidad o amperaje --> cantidad de agua o rotuladores

Resistencia --> Resistencia al paso del agua o rotuladores

Intensidad = Voltaje/Resistencia = Ley de Ohm

Voltaje = Intensidad · Resistencia

Resistencia = voltaje/intesidad

### ¿Por qué necesitamos resistencias con los LED?

Tenemos 2 circuitos:

5V ---- LED 1 ---- GND

5V ---- RESISTENCIA ---- LED 1 ---- GND

El voltaje de los dos circuitos es 5V. 

¿La resistencia?

I = V/R 

5V/441 Omega = 0'0133A = 11'33mA

5V/1 Ohm = 5A

5V/0 Ohm = Infinito A --> Cortocircuito (evitar)

## Primera programación

Dos funciones:

- Setup (){   --> Se ejecuta al principio una sola vez.
- Loop (){    --> Se ejecuta después y se repite indefinidamente.

COMENTARIOS:

- Si son de una línea, escribimos //
- Si son de más de una línea escribimos /*

## Código morse
  
**Primera prueba código morse**

```
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000); 
  ```
  
 **Segunda prueba del código morse**
 
 ```
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);                       // wait for a second
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(200);  
  ```
La tercera prueba del código morse era formar nuestro nombre utilizando puntos y rayas, simulados por los parpadeos de la luz del arduino. Hemos tenido que programar el tiempo de duración de los puntos y rayas, junto con el orden que llevarían para formar las letras. 

Durante la subida del código, cometí un error al utilizar de forma repetida los *void*, pero pude arreglarlo gracias a las indicaciones del profesor, cambiando los void por 'punto();' y 'rayas();'

## Morse y las funciones

![Mi nombre en morse](https://github.com/Mikeey666/ARDUINO/blob/main/MORSE_3_-_SARAY.ino)
