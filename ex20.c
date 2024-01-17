#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("digita la lunghezza del lato di un triangolo \n");
    scanf("%d", &a);
    printf("digita la lunghezza del lato di un triangolo \n");
    scanf("%d", &b);
    printf("digita la lunghezza del lato di un triangolo \n");
    scanf("%d", &c);
    printf("Ora ti dirò se questo è un triangolo \n");

    if(a + b > c){

        if(b + c > a){
            printf("I lati formano un triangolo \n");
        } 
        else {
            printf("I lati non formano un triangolo \n");
        }
    } else {
        printf("I lati non formano un triangolo \n");
    }


    if ( a == b && b == c){
        printf("il triangolo è equilatero \n");
    }
    else if (( a == b && b != c ) || ( a == c && b != c ) || ( b == c && a != b )){
        printf ("il triangolo è isoscele \n");
    }
    else {
        printf ("il triangolo è scaleno \n");
    }
    return (0);

}