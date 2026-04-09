#include <avr/io.h>


int main (void){

  DDRD &=~(1<<PD0); // CONFIGURA PINO PD0 COMO ENTRADA 
  PORTD |=(1<<PD0); //CONFIGURA COM A ENTRADA COM O PULL-UP 
  PORTB &=~(1<<PB5); //DESLIGA O PINO PB5 

  while(1){

    if(PIND &(1<<PD0)){
      //NIVEL ALTO
    }
    else{
      //nível baixo
    }
  }

}