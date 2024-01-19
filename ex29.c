#include <stdio.h>

int main(){
    int numero;
    int i;
    
    printf("inserisci un numero: \n");
    scanf("%d", &numero);

    i = numero - 1;
    while (numero % i != 0 && i > 1){
        i = i - 1;
    } 
    if (i == 1){
        printf ("il tuo numero è primo \n");
    } else {
        printf("il tuo numero non è primo \n");
    }

    return (0);
}