//bibliotecas (libraries)
#include <LiquidCrystal.h>
//variables globales
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);
  lcd.print("Que dice");
  lcd.setCursor(0, 1);
  lcd.print("la bola");
}
 void loop(){
  switchState = digitalRead(switchPin);
  if(switchState != prevSwitchState) {
    if(switchState == LOW) {
      reply = random(8);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("La bola dice:");
      lcd.setCursor(0, 1);

      switch(reply){
        case 0:
        lcd.print("Si");
        break;
        case 1:
        lcd.print("Probablemente");
        break;
        case 3:
        lcd.print("Jamas");
        break;
        case 4:
        lcd.print("No estoy segura");
        break;
        case 5:
        lcd.print("Vuelve a preguntar");
        break;
        case 6:
        lcd.print("Sufro interferencias");
        break;
        case 7:
        lcd.print("No");
        break;
      }
    }
  }
  prevSwitchState = switchState;
 }
