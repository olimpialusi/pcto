#include <stdio.h>

int main(){
    int a;
    float divisione;
    float divisionedue;

    printf ("inserisci un anno: \n");
    scanf ("%d", &a);
    divisione = a % 4;
    divisionedue = a % 100;
    if ( divisione == 0 ){
        if (divisionedue != 0)
        {
        printf ("l'anno è bisestile \n");
        } else {
            printf("l'anno non è bisestile \n");
        }
    }

    return (0);

}