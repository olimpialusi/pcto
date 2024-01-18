#include <stdio.h>

int main(){
    char parola[6] = {'g', 'i', 'a', 'l', 'l', 'o'} \0; // il backslash zero, fa si che il computer legga solo la parola scritta e non gli aggiunga altri dati che prende a caso dalla memoria
    printf("il colore preferito di olla è %s \n", parola);
    return (0);
}
