#include <stdio.h>

int main (){
    int a;
    printf("inserisci età: \n");
    scanf("%d", &a);
    if (a < 18){
        printf ("sei minorenne \n");
        } else if (a < 70){
            printf ("sei giovane \n");
            } else if (a > 70){
                printf ("sei vecchio \n");
            }
            return (0);
}