#include <avr/io.h>

int main(void){
  DDRD &=~(1<<PD0); // CONFIGURA O PINO PD0 COMO ENTRADA (0)
  PORTD &=~(1<<PD0); //CONFIGURA A ENTRADA SEM O PULL-UP
  DDRB |=(1<<PB5);//CONFIGURA PB5 COMO SAÍDA

  while(1){

    //verifica se o pino PD0 está em 1 
    if(PIND &(1<<PD0)){
      PORTB |=(1<<PB5);//SETA PB5
    }else{
      PORTB &=~(1<<PB5); 
    }
    
  }
}