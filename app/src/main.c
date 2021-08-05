#include "configuration_bits.h"
#include <hal/hal.h>
#include <hal/delays.h>

void main( void ) {

  hal_init();

  while( 1 ) {

    RB0 = 0x01;
    delay_ms( 250 );
    RB0 = 0x00;

  }

}
