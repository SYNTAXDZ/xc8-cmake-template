#include "hal/hal.h"

#include <pic16f84a.h>
#include <pic.h>
#include <xc.h>

void hal_init(void)
{
    //LATCbits.LATC1 = 0;
    TRISB = 0x00;
    PORTB = 0x01;

}
