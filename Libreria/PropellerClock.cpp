/*
  Propellerclock.cpp - Libreria para propeller clock
  Crated by Julian David Arango Orejuela
  www.lascomandas.com/propellerclock
*/


#include "PropellerClock.h"
#include "arduino.h"

PropellerClock::PropellerClock(int pin_led, int baudios)
{
  Serial.begin(baudios);
  pinMode(pin_led,OUTPUT);
  _pin = pin_led;
}

void PropellerClock::prender_led(int tiempo)
{
  digitalWrite(_pin,1);
  delay(tiempo);
  digitalWrite(_pin,0);
  delay(tiempo);
  }

void PropellerClock::escribir_serial(float valor)
{
  Serial.print("valor entrante: ");
  Serial.print("\t");
  Serial.println(valor);
  }

void PropellerClock::conversion_voltaje(int pwm)
{
  float valor = float(pwm)*(5.0/1023.0);
  return valor;  
  }
