#include "PropellerClock.h"
#include "arduino.h"


PropellerClock::PropellerClock(int times)
{
  timer=times;
  }


void PropellerClock::mostrar(char letra)
{
  switch(letra){

  case ' ':
  PORTD = 0x00;
  delay(timer);
  delay(timer);
  delay(timer);
  break;
    
  case 'A':
  PORTD = 0xf0;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0xf0;
  delay(timer);
  break;
  
  case 'B':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0x50;
  delay(timer);
  break;

  case 'C':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  break;

  case 'D':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  PORTD = 0x70;
  delay(timer);
  break;

  case 'E':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  break;

  case 'F':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0x08;
  delay(timer);
  break;

  case 'G':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xE8;
  delay(timer);
  break;

  case 'H':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'I':
  PORTD = 0x88;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  break;

  case 'J':
  PORTD = 0x88;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x08;
  delay(timer);
  break;

  case 'K':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x60;
  delay(timer);
  PORTD = 0x98;
  delay(timer);
  break;

  case 'L':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x80;
  delay(timer);
  PORTD = 0x80;
  delay(timer);
  break;

  case 'M':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x18;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0x18;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'N':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x10;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'O':
  PORTD = 0x70;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  PORTD = 0x70;
  delay(timer);
  break;

  case 'P':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0x38;
  delay(timer);
  break;

  case 'Q':
  PORTD = 0x38;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'R':
  PORTD = 0x38;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'S':
  PORTD = 0x98;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xc8;
  delay(timer);
  break;

  case 'T':
  PORTD = 0x08;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x08;
  delay(timer);
  break;

  case 'U':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x80;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'V':
  PORTD = 0x78;
  delay(timer);
  PORTD = 0x80;
  delay(timer);
  PORTD = 0x78;
  delay(timer);
  break;

  case 'W':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xc0;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0xc0;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case 'X':
  PORTD = 0x88;
  delay(timer);
  PORTD = 0x50;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0x50;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  break;

  case 'Y':
  PORTD = 0x18;
  delay(timer);
  PORTD = 0xe0;
  delay(timer);
  PORTD = 0x18;
  delay(timer);
  break;

  case 'Z':
  PORTD = 0xc8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0x98;
  delay(timer);
  break;

  case '1':
  PORTD = 0x90;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x80;
  delay(timer);
  break;

  case '2':
  PORTD = 0xe8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xb8;
  delay(timer);
  break;

  case '3':
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case '4':
  PORTD = 0x38;
  delay(timer);
  PORTD = 0x20;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case '5':
  PORTD = 0xb8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xe8;
  delay(timer);
  break;

  case '6':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xe8;
  delay(timer);
  break;

  case '7':
  PORTD = 0x08;
  delay(timer);
  PORTD = 0x08;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case '8':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0xa8;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case '9':
  PORTD = 0x38;
  delay(timer);
  PORTD = 0x28;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;

  case '0':
  PORTD = 0xf8;
  delay(timer);
  PORTD = 0x88;
  delay(timer);
  PORTD = 0xf8;
  delay(timer);
  break;
  
  default:
  Serial.println("x");
  delay(timer);
  break;
  
  }
  }


  
