#include <stdio.h>

float calcolaPotenza(float b){
    float potenza;
    
    potenza = b * b;
    return potenza;
}


float radice(float delta){
    float temp, radice;

    radice = delta / 2;
    temp = 0;

    while (radice != temp){
        temp = radice;
        radice = (delta / temp + temp) /2;
    }
    return radice;
}

int main(){
    
    float a;
    float b;
    float c;
    float x1;
    float x2;
    float x3;
    float potenza;
    float delta;
    float moltiplicazione;

    printf("inserisci il primo coefficente dell'equazione di secondo grado: \n");
    scanf("%f", &a);
    printf("inserisci il secondo coefficente dell'equazione di secondo grado: \n");
    scanf("%f", &b);
    printf("inserisci il terzo coefficente dell'equazione di secondo grado: \n");
    scanf("%f", &c);
    potenza = calcolaPotenza(b);
    moltiplicazione = 4 * a * c;
    delta = potenza - moltiplicazione;
    
    if (delta > 0){
        b = - b;
        x1 = (b + radice(delta)) / ( 2 * a);
        x2 = (b - radice(delta)) / ( 2 * a);
        printf("le soluzioni della tua equazione sono: %f e %f \n", x1, x2);
    } else if (delta == 0){
        b = - b;
        x3 = b / ( 2 * a);
        printf("la soluzione della tua equazione è una sola ed è: %f \n", x3);
    } else {
        printf("la tua equazione non ha soluzioni reali: \n");
    }
    
return (0);

}