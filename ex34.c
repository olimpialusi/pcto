#include <stdio.h>

double somma(double numero, double secondonumero){
    double somma;
    somma = numero + secondonumero;
    printf("il risultato della tua somma è: %lf \n", somma);
}

double sottrazione(double numero, double numerodue){
    double sottrazione;
    sottrazione = numero - numerodue;
    printf("il risultato della tua sottrazione è: %lf \n", sottrazione);
}

double moltiplicazione(double numero, double numerodue){
    double moltiplicazione;
    moltiplicazione = numero * numerodue;
    printf("il risultato della tua moltiplicazione è: %lf \n", moltiplicazione);
}

double divisione(double numero, double secondonumero){
    double divisione;
    divisione = numero / secondonumero;
    printf("il risultato della tua divisione è: %lf \n", divisione);
}

int main(){
    double numero;
    double secondonumero;
    char operatore;
    
    printf("digita un numero: \n");
    scanf("%lf", &numero);
    printf("digita un altro numero: \n");
    scanf("%lf", &secondonumero);
    printf("scegli un operatore: \n");
    scanf(" %c", &operatore);

    if (operatore == '+'){
        somma(numero, secondonumero);
    }
    if (operatore == '-'){
        sottrazione(numero, secondonumero);
    }
    if (operatore == '*'){
        moltiplicazione(numero, secondonumero);
    }
    if (operatore == '/'){
        divisione(numero, secondonumero);
    }
    return (0);
}