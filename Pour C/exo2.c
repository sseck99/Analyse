#include<stdio.h>

int main(viod){

    int annee ;
    printf("veillez entre l'annee:");
    scanf("%d",&annee);
    if ( annee % 4==0 && annee % 100 !=0 || annee % 400==0)
    {
        printf("l'annee %d est bissextille",annee);
    }
    else 
    {
        printf("l'annee %d n'est pas bissextille",annee);
    }
    return 0;
}