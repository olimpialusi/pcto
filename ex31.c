#include <stdio.h>

int main(){
    float numero;
    float media;
    float i;
    float d;
    float somma;

    printf("inserisci un numero: \n");
    scanf("%f", &numero);
    i = 0;
    d = 1;
    while(numero >= 0){
        
        somma = i + numero; 
        media = (somma) / d;
        printf("ecco la media dei numeri: %f \n", media);
        d = d + 1;
        printf("inserisci un numero: \n");
        scanf("%f", &numero);
     }
     if (numero < 0){
        printf("sistema bloccato \n");
     }
    
     return(0);
    
}