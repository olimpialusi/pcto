#include <stdio.h>

int main(){
    int a;
    int b;
    printf("inserisci un numero: \n");
    scanf("%d", &a);
    printf ("inserisci un altro numero: \n");
    scanf("%d", &b);
    if(a % b == 0){
    printf("il primo numero è multiplo del secondo!!! \n");
    } 
    {else  (a % b != 0)
    printf("il primo numero non è multiplo del secondo :,( \n)");
    }
    return (0);
    
}