#include <stdio.h>

void cambio(int *x, int *y){
    int i;
    i = *x;
    *x = *y;
    *y = i;
}

int main(){
    int x = 5;
    int y = 7;
    printf("ora scambierò i valori di x e y \n");
    printf("x = 5 e y = 7 \n");
    cambio(&x, &y);
    printf("ecco i valori invertiti \n");
    printf("x = %d e y = %d\n", x, y);
    return (0);
}