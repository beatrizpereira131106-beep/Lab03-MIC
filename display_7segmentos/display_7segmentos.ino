#include <avr/io.h>

int main(void){

    DDRD &= ~(1 << PD0); // Configura PD0 como entrada 
    DDRC = 0xFF;         // Configura todo o PORTC como saída 
    PORTD |= (1<<PD0);// Ativa pull-up interno 

    while(1){
        
        if(!(PIND & (1 << PD0))){ // Se botão pressionado..;
            
            PORTC = 0x79; // O valor 0x79 (0b01111001) acende os segmentos para formar o '3'
        }
        else{
            PORTC = 0x00; // Apaga tudo
        }
    }
}