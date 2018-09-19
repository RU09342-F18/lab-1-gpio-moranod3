
#include <msp430.h>
#include <stdint.h>

#define led1Speed 31000  // speed of led1 should not exceed 2^16 (65536)
#define led2Speed 9999  // speed of led2 should not exceed 2^16  (65536)
#define U16 uint16_t    // I hate typing out uint16_t!

void main() {
    WDTCTL = WDTPW | WDTHOLD;  // don't touch it, it's for the watchdog stuff

    P1DIR |= (BIT0 | BIT6);// set P1DIR with P0 and P6 to high (1)

    P1OUT = BIT3; // set port1.3 to output

    U16 ledCounter1 = 0;  // initialize counter for led 1
    U16 ledCounter2 = 0;  // initialize counter for led 2

    for (;;) {

            if (ledCounter1 == led1Speed){  // checks if counter has reached the led speed
            P1OUT ^= BIT0;
            ledCounter1 = 0;  // resets first led counter
            }

            if (ledCounter2 == led2Speed){ // checks if counter has reached the led speed
            P1OUT ^= BIT6;
            ledCounter2 = 0;  // resets second led counter
            }

            ledCounter1++;
            ledCounter2++;
    }
}
