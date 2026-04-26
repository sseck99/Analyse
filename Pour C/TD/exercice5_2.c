 # include<stdio.h>

 int main()
 {
    float pht ;
    float ttc;
    const float tva = 0.196 ;
    printf("veuillez entre le prix hors taxes:");
    scanf("%f",&pht);
    ttc = pht*(1 + tva);
    
    printf("le prix ttc est de: %.10f\n",ttc );

    return 0;
 }