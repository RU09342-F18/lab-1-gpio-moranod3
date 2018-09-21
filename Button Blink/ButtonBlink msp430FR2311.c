
#include <msp430.h>

void main() {
    WDTCTL = WDTPW | WDTHOLD;                 // don't touch it, it's for the watchdog stuff
    PM5CTL0 &= ~LOCKLPM5;

    P1DIR |= (BIT0);   // set P1DIR with P0(1) outputs

    P1REN |= BIT1;     // set port1.1 to a pull up resistor

    P1OUT = BIT1;     // set output to port 1.1

    for (;;) {

        if (!(P1IN & BIT1)){            // checking if the button is pressed
            P1OUT ^= (BIT0);  // flip bits
            __delay_cycles(250000); // delay to prevent button bounce
        }

    }
}
