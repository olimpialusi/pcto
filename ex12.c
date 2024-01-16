#include <stdio.h>

int main(){
    int numero;
    printf("inserisci a quanti anni puoi prendere la patente nel tuo stato: \n");
    scanf("%d", &numero);
    int eta;
    printf("inserisci la tua età: \n");
    scanf("%d", &eta);
    if (eta < 18){
    printf("non puoi prendere la patente \n");
    } else if (eta >= 18){
    printf("puoi prendere la patente \n");
    }
    return (0);

}