#include <stdio.h>

int main(){
    int a;
    int b;
    int c;

    printf("scrivi la lunghezza di un lato di un triangolo \n");
    scanf("%d", &a);

    printf("scrivi la lunghezza di un altro lato di un triangolo \n");
    scanf("%d", &b);

    printf("scrivi la lunghezza dell'ipotenusa di un triangolo \n");
    scanf("%d", &c);

    if(a + b > c){

        if(b + c > a){
          printf("i lati scelti formano un triangolo \n");
        } else {
            printf("I lati non formano un triangolo \n");
        }
        
            if(c + a > b){
                if ( a == b ){
                    if ( b == c ){
                        if ( a == c ){
                            printf ("i lati scelti formano un triangolo equilatero \n"); }
    } printf("i lati scelti formano un triangolo \n");
                if ( a == b){
                    if ( a != c ){
                        if ( b != c){
                            printf("i lati scelti formano un triangolo isoscele \n");}
            }
        
                if ( a != b ){
                    if ( b != c ){
                        if ( c != a ){
                            printf("i lati scelti formano un triangolo scaleno \n");}
                }
            }
                else {
                printf("i lati scelti non formano un triangolo scaleno \n");
            }
        }       else {
                    printf("i lati scelti non formano un triangolo isoscele \n");
        }
}               else {
                    printf ("i lati scelti non formano un triangolo equilatero \n");
}

            }

            else {
                printf("I lati non formano un triangolo \n");
            }
      
    }

    else{
        printf("I lati non formano un triangolo \n");
    }



return (0);

}
