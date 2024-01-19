#include <stdio.h>

void calcolaMoltiplicazione(){
    int numero;
    int risultato;
    int moltiplicazione;

    printf("inserisci un numero: ");
    scanf("%d", &numero);
    moltiplicazione = risultato * risultato;
    if (numero == moltiplicazione){
        printf("la radice quadrata di %d è %d \n", numero, risultato);
    }

}

int main(){
    calcolaMoltiplicazione();
    return(0);
}