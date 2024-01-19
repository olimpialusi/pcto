#include <stdio.h>

int main(){
    int annonascita;
    int sottrazione;
    int sottrazionedue;

    printf("digita il tuo anno di nascita \n");
    scanf("%d", &annonascita);
    sottrazione = annonascita - 1969;
    sottrazionedue = 1969 - annonascita;

    if( annonascita < 1969 ){
        printf("sei nato\a %d", sottrazionedue);
        printf(" anni prima del primo passo sulla luna \n");
    } else if ( annonascita > 1969 ){
        printf("sei nato\a %d", sottrazione);
        printf("anni dopo il primo passo sulla luna \n");
    } else {
        printf("sei nato lo stesso anno del primo passo sulla luna \n");
    }
    return (0);
    
}