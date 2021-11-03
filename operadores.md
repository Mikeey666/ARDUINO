
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

**BASE OPERADORES**

```int estadoBotonPin2 = 0;
int estadoBotonPin3 = 0;
void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  estadoBotonPin2 = digitalRead(2);
  estadoBotonPin3 = digitalRead(3);
  Serial.print("Estado del botón 2: ");
  Serial.println(estadoBotonPin2);
  Serial.print("Estado del botón 3: ");
  Serial.println(estadoBotonPin3); 
}
