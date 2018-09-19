
#include <msp430.h>

void main() {
    WDTCTL = WDTPW | WDTHOLD;                 // don't touch it, it's for the watchdog stuff

    P1DIR |= (BIT0 | BIT6);   // set P1DIR with P0 and P6 to high (1) outputs

    P1REN |= BIT3;     // set port1.3 to a pull up resistor

    P1OUT = BIT3;     // set output to port 1.3

    for (;;) {
        
        if (!(P1IN & BIT3)){            // checking if the button is pressed
            P1OUT ^= (BIT0 | BIT6);  // flip bits
            __delay_cycles(250000); // delay to prevent button bounce
        }

    }
}
