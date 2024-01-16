#include <stdio.h>

int main(){
    float a;
    printf("inserisci un numero: \n");
    scanf("%f", &a);
    if(a > 0){
    printf("il tuo numero è maggiore di 0 \n");
    } if(a > 5){
    printf("il tuo numero è maggiore di 5 \n");
    } if(a > 10){
    printf("il tuo numero è maggiore di 10 \n");
    }
    return (0);

}