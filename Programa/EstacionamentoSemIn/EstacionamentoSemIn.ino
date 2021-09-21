#include <LiquidCrystal.h>

LiquidCrystal lcd(2,3,4,6,7,8,9);

#define sensor1 22
#define sensor2 23
#define sensor3 24
#define sensor4 25
#define sensor5 27

#define ledr1 30
#define ledg1 31
#define ledb1 32

#define ledr2 34
#define ledg2 35
#define ledb2 36

#define ledr3 38
#define ledg3 39
#define ledb3 40

#define ledr4 42
#define ledg4 43
#define ledb4 44

#define ledr5 46
#define ledg5 47
#define ledb5 48

int estadosensor1;
int estadosensor2;
int estadosensor3;
int estadosensor4;
int estadosensor5;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  for (int i = 22; i <= 27; i++) {
    pinMode(i, INPUT); 
  }
  for (int i = 30; i <= 48; i++) {
    pinMode(i, OUTPUT);
    digitalWrite(i, HIGH);
  }
  anteriorsensor1 = digitalRead(sensor1);
  anteriorsensor2 = digitalRead(sensor2);
  anteriorsensor3 = digitalRead(sensor3);
  anteriorsensor4 = digitalRead(sensor4);
  anteriorsensor5 = digitalRead(sensor5);
}

void loop() {
  estadosensor1 = digitalRead(sensor1);
  estadosensor2 = digitalRead(sensor2);
  estadosensor3 = digitalRead(sensor3);
  estadosensor4 = digitalRead(sensor4);
  estadosensor5 = digitalRead(sensor5);

  if (estadosensor1) {
    color1(255, 0, 255);
  } else {
    color1(0, 255, 255);
  }
  if (estadosensor2) {
    color2(255, 0, 255);
  } else {
    color2(0, 255, 255);
  }
  if (estadosensor3) {
    color3(255, 0, 255);
  } else {
    color3(0, 255, 255);
  }
  if (estadosensor4) {
    color4(255, 0, 255);
  } else {
    color4(0, 255, 255);
  }
  if (estadosensor5) {
    color5(255, 0, 255);
  } else {
    color5(0, 255, 255);
  }
  if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 0");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 1");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 2");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 3");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (!estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  } else if ((!estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (!estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (!estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (!estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 4");
    delay(500);
    lcd.clear();
  } else if ((estadosensor1) && (estadosensor2) && (estadosensor3) && (estadosensor4) && (estadosensor5)) {
    lcd.print("Vagas");
    lcd.setCursor(0, 2);
    lcd.print("Disponiveis: 5");
    delay(500);
    lcd.clear();
  }
}

void color1(int vermelho, int verde, int azul) {
  analogWrite(ledr1, vermelho);
  analogWrite(ledg1, verde);
  analogWrite(ledb1, azul);
}
void color2(int vermelho, int verde, int azul) {
  analogWrite(ledr2, vermelho);
  analogWrite(ledg2, verde);
  analogWrite(ledb2, azul);
}
void color3(int vermelho, int verde, int azul) {
  analogWrite(ledr3, vermelho);
  analogWrite(ledg3, verde);
  analogWrite(ledb3, azul);
}
void color4(int vermelho, int verde, int azul) {
  analogWrite(ledr4, vermelho);
  analogWrite(ledg4, verde);
  analogWrite(ledb4, azul);
}
void color5(int vermelho, int verde, int azul) {
  analogWrite(ledr5, vermelho);
  analogWrite(ledg5, verde);
  analogWrite(ledb5, azul);
}
