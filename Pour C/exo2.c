#include <stdio.h>

int main(void) {
    int annee;

    printf("Veuillez entrer l'année : ");
    scanf("%d", &annee);

    if ( (annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0) ) {
        printf("L'année %d est bissextile.\n", annee);
    } else {
        printf("L'année %d n'est pas bissextile.\n", annee);
    }

    return 0;
}
