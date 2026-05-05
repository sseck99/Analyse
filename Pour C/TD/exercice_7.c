#include <stdio.h>

int main(){
    char chaine[100];
    int i ;

    printf("Veuillez entrer une chaine de caractères : ");
    get(chaine);

    printf("le caractère ainsi que son code numérique :");

    for (i = 0 ; i < sizeof(chaine); i++)
    {
        printf("%c = %d\n",chaine[i],chaine[i]);
    }
    
    return 0;
}