#include <stdio.h>

int main(){
    float a;
    float b;
    printf("inserisci un numero: \n");
    scanf("%f", &a);
    printf("inserisci un altro numero: \n");
    scanf("%f", &b);
    if (a<b){
        printf("il primo numero è minore del secondo :) \n");
        } else if (a>b){
            printf("il primo numero è maggiore del secondo :P \n");
        } else
        printf ("i due numeri sono uguali :o \n");
    return (0);
}