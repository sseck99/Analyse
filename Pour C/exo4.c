#include<stdio.h>

int main(){
    int mois;

    printf("Donner le numéro du mois");
    scanf("%d", &mois);
switch (mois)
{
    case 1 : printf("Janvier"); break;
    case 2 : printf("Février"); break;
    case 12 : printf("Décembre"); break;
    default : printf("Un numéro de mois doit êtrecompris entre 1 et 12");

    return 0;
}
}