/*
	Propellerclock.h - Libreria para propeller clock
	Crated by Julian David Arango Orejuela
	www.lascomandas.com/propellerclock
*/
#ifndef PropellerClock_h
#define PropellerClock_h
#include "arduino.h"

class PropellerClock
{

  private:
      int _pin;
  public:
      PROPELLER_CLOCK(int pin_led, int baudios);
      void prender_led(int tiempo);
      void escribir_serial(float valor);
      float conversion_voltaje(int pwm);
  
};

#endif
