    printf ("l'anno non è bisestile \n");


int main(){
    int a;
    float divisione;
    float divisionedue;
    float divisionetre;

    printf ("inserisci un anno: \n");
    scanf ("%d", &a);
    divisione = a % 4;
    divisionedue = a % 100;
    divisionetre = a % 400;
    if ( divisione == 0 ){
        if (divisionedue != 0)
        {
        printf ("l'anno è bisestile \n");
        } else if (divisionetre == 0){ 
            printf("l'anno è bisestile \n");
        }
    else 
        printf("l'anno non è bisestile \n");
    
    }
    return (0);

}