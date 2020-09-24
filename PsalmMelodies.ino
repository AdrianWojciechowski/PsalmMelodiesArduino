/* Adrian Wojciechowski
 * 
 * Plays chosen Psalm melody (just one in this version)
 * lcd 16x2 on AVT 1615
 */

#include <LiquidCrystal.h>
#define BUTTON1 0
#define BUTTON2 1
#define BUTTON3 2
#define BUTTON4 3
#define BUZZER A5

#define C4 261.63
#define D4 293.66
#define E4 329.63
#define F4 349.23
#define G4 392.00
#define A4 440.00
#define H4 466.16
#define C5 523.25

LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //(Rs, E, D4, D5, D6, D7)

void setup() {
  lcd.begin(16,2);  //Initialize screen size
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(BUTTON3, INPUT);
  pinMode(BUTTON4, INPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, HIGH);
  lcd.print("Adrian");
  lcd.setCursor(0,1);
  lcd.print("Wojciechowski");
  delay(500);
}

void loop() {
  int choice = 0;
  while (true) {
    lcd.clear();
    lcd.setCursor(0,0);
    while(digitalRead(BUTTON3) == HIGH) {
      lcd.clear();
      lcd.setCursor(0,0);
      lcd.print(choice);

      if (digitalRead(BUTTON1) == LOW) {
        choice++;
      }
      else if (digitalRead(BUTTON2) == LOW) {
        choice--;
      }
      
      delay(200);
    }
    
    lcd.clear();
    lcd.setCursor(0,0);
    switch(choice) {
      case 0:
      break;
      case 1:
        lcd.print("Psalm 1");
        psalm1();
        break;
    }
    
    delay(200);
  }
}

void psalm1() {
  tone(BUZZER, 261.63);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 349.23);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 329.63);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 293.66);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, 261.63);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);

    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, H4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);

    delay(1000);

    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, H4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, C5);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, C5);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);

    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, A4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, E4);
    delay(1000);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);

    tone(BUZZER, D4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, D4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, D4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, D4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, D4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, E4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, C4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);

    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, G4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, E4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
    tone(BUZZER, F4);
    delay(500);
    noTone(BUZZER);
    digitalWrite(BUZZER, HIGH);
}
