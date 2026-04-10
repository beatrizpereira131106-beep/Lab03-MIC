#include <avr/io.h>


int main (void){

  DDRD &=~(1<<PD0); // CONFIGURA PINO PD0 COMO ENTRADA 
  PORTD |=(1<<PD0); //CONFIGURA COM A ENTRADA COM O PULL-UP 
  DDRB |=(1<<PB5); //configura pino pb5 como saída  

  while(1){

    if(PIND &(1<<PD0)){
      
        PORTB &=~(1<<PB5); //NIVEL ALTO
    }
    else{

      PORTB |=(1<<PB5); //nível baixo
    }
  }

}