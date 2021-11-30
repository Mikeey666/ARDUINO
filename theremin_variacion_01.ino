int sensorValue;
int sensorLow = 1023;
int sensorHigh = 0;
int switchState = 0;

const int ledPin = 13;

void setup() {

  pinMode(ledPin, OUTPUT);
  
    pinMode(2,INPUT);
  digitalWrite(ledPin, HIGH);

  while (millis() < 2000) {

    sensorValue = analogRead(A0);
    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }

    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }

  }

  digitalWrite(ledPin, LOW);
}

void sonarTheremin() {
    sensorValue = analogRead(A0);

  int pitch =
  map(sensorValue, sensorLow, sensorHigh, 50, 4000);

  tone(8, pitch, 20);

  delay (10);
}

void loop() {

 switchState = digitalRead(2);

 if (switchState == HIGH) {
  sonarTheremin();
 }
 delay(10);
}
