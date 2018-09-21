## How To Use The Code
To use the code simply program it onto the correct device and give the device power.

## MSP43G2
My buttonBlink program for the msp430G2 is very simple. The first line in the main function simply turns of the watch dog timer The next few lines are used to set-up the GPIO ports. The lines of code set ports 1.0 and 1.6, which are the LED ports, direction to output. The next line sets port 1.3 to a pull-up resistor. An infinite loop is then initiated using an empty for loop. Inside the infinite loop there is an if statement that checks to see if the button is pressed and if there is an output. If these conditions are met port 1.0 and 1.6 has its values flipped via n xor equation. This changes the LEDs on or off. Then finally the program delays for 250,000 clock cycles. The delay is to prevent button bouncing from causing issues. After the delay the if statement is completed and the program restarts from the begining of the infinite loop.

## MSP430FR2311
The msp430FR2311 program is nearly identical to the msp430G2 code. The only differences are that I had it blink 1 LED instead of 2, there is a line of code that is needed to turn on the GPIO functionallity for the FR2311 that was added, and the ports for the buttons needed to be changed to accomodate the different board.
