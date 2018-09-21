
#include <msp430.h>

void main() {
    WDTCTL = WDTPW | WDTHOLD;   // don't touch it, it's for the watchdog stuff
    PM5CTL0 &= ~LOCKLPM5;

    P1DIR |= BIT0; // set P1DIR with P0 to high (1)

    P1OUT = BIT0; // set port1.0 to output

    for (;;) {
            P1OUT ^= (BIT0); // flip bit0 in output port
            __delay_cycles(250000); // delay so blink is visible
        }
}
