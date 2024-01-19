#include <stdio.h>

int main(){
    
    int i = 100;
    
    printf("ora ti mostro i numeri pari compresi tra 0 e 100 in ordine decrescente \n");
    while (i >= 0){
        printf("%d ", i);
        i = i - 2;
    }

    return (0);

}