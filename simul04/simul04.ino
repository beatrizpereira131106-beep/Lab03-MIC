#include <avr/io.h>

int main(void){

  DDRB = 0b11111111;//PortB como saída em todos os pinos 
  DDRD =0b00000000; //PORTD COMO ENTRADA EM TODOS OS PINOS
  PORTD = 0b00000000; //DESABILITANDO O PULL-UP INTERNO EM TODOS OS PINOS 

  while(1){ //Laço principal - lê os dados em PIND e escreve em PortB
  
  PORTB = PIND;
    
  }

}
