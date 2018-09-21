## How To Use The Code
To use the code simply program it onto the correct device and give the device power.

## MSP430G2
Simple blink was obviously the most simple piece of code for this lab, hence its called simple blink. I used this code as a base for all my other pieces of code. This code starts the same as all the others by disabling the watchdog timer. Then the pins are configured. In my code I configured the pins so that two LEDs blinked instead of just one. After conifguring the pins the code enters an infinite loop that simply flips the LED bits then delays for 250,000 cycles. This loop repeats until the microcontroller loses power.

## MSP430FR2311
This code again is very similiar to the msp430G2 code. The only diferences are instead of using two LEDs it blinks one, and the ports are different to accomodate the different layout of the msp430FR2311. 
