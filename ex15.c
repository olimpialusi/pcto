#include <stdio.h>

int main(){
    float a;
    float b;
    float c;
    float sottrazione;

printf ("inserisci un numero: \n");
scanf ("%f", &a);
printf ("inserisci un altro numero: \n");
scanf ("%f", &b);
printf("inserisci un altro numero ancora: \n");
scanf ("%f", &c);
sottrazione = a - b == b - c;
if ( a - b == b - c ){
printf("i numeri possono essere considerati in progressione aritmetica \n");
 } else if ( a - b != b - c ){
   printf("i numeri non possono essere considerati in progressione aritmetica \n");
 }
return (0);

}