#include <stdio.h>

int main()
{
    int numero;
    int temp;
    int somma;
    int radice;

    printf("dimmi un numero: \n");
    scanf("%d", &numero);
    temp = numero / 2;
    somma = temp + temp;
    radice = (numero / somma) / 2;
    printf("la radice quadrata di %d è %d \n", numero, radicedue);
    return (0);
}

