/*	Author: ngupt009
 *  Partner(s) Name: surya
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

unsigned char GetKeypadKey() {
    PORTC = 0xEF;
    asm("nop");
    if(GetBit(PINC,0) == 0) { return('1'); } 
    if(GetBit(PINC,1) == 0) { return('4'); } 
    if(GetBit(PINC,2) == 0) { return('7'); } 
    if(GetBit(PINC,3) == 0) { return('*'); } 
    
    PORTC = 0xDF
    asm("nop");
    if(GetBit(PINC,0)==0) {return('2') }
    PORTC = 0xBF;
    asm("nop");
    return('\0');
}

    
int main(void) {
    /* Insert DDR and PORT initializations */

    /* Insert your solution below */
    while (1) {

    }
    return 1;
}
