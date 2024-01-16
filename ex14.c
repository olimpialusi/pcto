#include <stdio.h>

int main(){
    float a;
    float moltiplicazione;
    float somma;
    float sommadue;
    printf("inserisci una temperatura in gradi celsius: \n");
    scanf("%f", &a);
    if ( a < -273.15){
        printf("temperatura inserita, minore dello zero assoluto, errore \n");
    }
        moltiplicazione = 9/5*a;
        somma = moltiplicazione + 32;
        printf("temperatura in gradi fahrenheit: %f \n", somma);
        sommadue = a + 273.15;
        printf("temperatura in gradi kelvin: %f \n", sommadue);
        

    return (0);


}