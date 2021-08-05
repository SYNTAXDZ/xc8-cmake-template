#include "hal/hal.h"

#include <xc.h>

void hal_init( void ) {

  TRISB = 0x00;
  PORTB = 0x00;

}
