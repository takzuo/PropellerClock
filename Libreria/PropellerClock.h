#ifndef PropellerClock_h
#define PropellerClock_h
#include "arduino.h"

class PropellerClock
{

  private:
      int timer;
  public:
      PropellerClock(int times);
      void mostrar(char letra);
};

#endif
