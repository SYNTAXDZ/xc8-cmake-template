#include "hal/delays.h"

void delay_ms( unsigned int value ) {

  unsigned int i;
  unsigned char j;

  for( i = 0; i < value; i++ ) {

    for( j = 0; j < 200; j++ ) {

      asm("NOP");
      asm("NOP");
      asm("NOP");
      asm("NOP");
      asm("NOP");

    }

  }

}
