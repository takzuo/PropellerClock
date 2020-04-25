#include "PropellerClock.h"
#include "arduino.h"

volatile byte state = LOW;               
int intPin = 2;
int timeres = 2; //tiempo de apertura
int valor_pwm;
float voltaje;

PropellerClock metodo(timeres);

void setup() {
  Serial.begin(9600);
  DDRD = B11111000;
  pinMode(intPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(intPin), reseteo, CHANGE);
}

void (* resetFunc)(void)=0;
void times(){
  
}
void reseteo() {
  PORTD = B00000000;
  resetFunc();
}

void loop() {
  // put your main code here, to run repeatedly:
  metodo.mostrar('A');
  metodo.mostrar('B');
  metodo.mostrar('C');
  metodo.mostrar('D');
  metodo.mostrar('E');
  metodo.mostrar('F');
  metodo.mostrar('G');
  metodo.mostrar(' ');
  metodo.mostrar('1');
  metodo.mostrar('2');
  metodo.mostrar('3');
  metodo.mostrar('4');

  
}
