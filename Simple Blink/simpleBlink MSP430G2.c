
#include <msp430.h>

void main() {
    WDTCTL = WDTPW | WDTHOLD;     // don't touch it, it's for the watchdog stuff

    P1DIR |= (BIT0 | BIT6);// set P1DIR with P0 and P6 to high (1)
    P1OUT = BIT3; // set port1.3 as output

    for (;;) {
            P1OUT ^= (BIT0 | BIT6);  // flip bit0 and bit6 in the output port
            __delay_cycles(250000);  // delay so blink is visible
        }
}

