#include <avr/io.h>

int main(void){

DDRD &=~(1<<PD0);
DDRC = 0xFF; 
}
