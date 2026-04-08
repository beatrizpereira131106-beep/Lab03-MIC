#include <avr/io.h>

int main (void)
{
  DDRB |=(1<<PB5); //CONFIGURA O PINO PB5 COMO SAÍDA 

  while(1){
    //loop infinito 
    //Liga o pino PB5
    PORTB |= (1<<PB5);
   
    //DESLIGA O PINO PB5
    //PORTB &=~(1<<PB5);
  }
}
