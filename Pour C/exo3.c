#include<stdio.h>

int main(void){
    int nombre ;
    int x =0;
    int X1 =1;
    int y ;
    
    printf("Entre le nombre de terme a afficier:");
    scanf("%d", &nombre);
    
    for (int i = 1; i<=nombre; i +=1)
    {
        printf("%d ",x);
        y= x + X1;
        x = X1;
        X1 = y;
    }
    return 0; 
}