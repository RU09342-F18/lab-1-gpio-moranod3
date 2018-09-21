
#include <msp430.h>
#include <stdint.h>

#define led1Speed 41000  // speed of led1 should not exceed 2^16 (65536)
#define led2Speed 7500  // speed of led2 should not exceed 2^16  (65536)
#define U16 uint16_t    // I hate typing out uint16_t!

void main() {
    WDTCTL = WDTPW | WDTHOLD;  // don't touch it, it's for the watchdog stuff
    PM5CTL0 &= ~LOCKLPM5;

    P1DIR |= BIT0;// set P1DIR with P0 to high (1)
    P2DIR |= BIT0;// set P2DIR with P0 to high (1)

    P1OUT = BIT0; // set port1.0 to output
    P2OUT = BIT0; // set port2.0 to output

    U16 ledCounter1 = 0;  // initialize counter for led 1
    U16 ledCounter2 = 0;  // initialize counter for led 2

    for (;;) {

            if (ledCounter1 == led1Speed){  // checks if counter has reached the led speed
            P1OUT ^= BIT0;
            ledCounter1 = 0;  // resets first led counter
            }

            if (ledCounter2 == led2Speed){ // checks if counter has reached the led speed
            P2OUT ^= BIT0;
            ledCounter2 = 0;  // resets second led counter
            }

            ledCounter1++;
            ledCounter2++;
    }
}
