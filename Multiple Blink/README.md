## How To Use The Code
To use the code simply program it onto the correct device and give the device power. This will have the LEDs blink at a set rate. The rate can easily be changed by changing the value of led1Speed and led2Speed in the defines. The value should be large enough to have a visible effect (more than 5000) and smaller than 65536, since this is the cap of an unisigned int of size 16 bits. 

## MSP430G2
My multi-blink program is the most complex of them all yet it is still fairly simple. Like all the other programs the first step in the code is to configure all the ports to the correct configurations. This configuration is the same as all the other msp430g2 configurations except buttonblink, since buttonblink has to configure for the button input aswell. The multiblink program like all the others utilizes and infinite loop. Inside this loop two counters are incremented (one for each LED) then when one of these counters reach a certain number (determined by the ledSpeed variables) that LED is flipped on or off and that LEDs counter is reset. Then the same happens to the other eventually and this will happen until the microcontroller is no longer giving power.

## MSP430FR2311
The only changes from the msp430G2 program to this is that the port conifugration was changed to accomoaded the different microcontroller. Other than this the code is the exact same.
