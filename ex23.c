#include <stdio.h>

void calcolaPotenza(){
    int numero;
    int potenza;

    printf("inserisci un numero e io te lo eleverò alla quinta: ");
    scanf("%d", &numero);
    potenza = numero * numero * numero * numero * numero;
    printf("%d elevato alla quinta è %d \n", numero, potenza);

}

int main(){
    calcolaPotenza();
    calcolaPotenza();
    calcolaPotenza();
    calcolaPotenza();
    return(0);
}