#include<stdio.h>

int main(void){
    float temperature;
    printf("Veillez entre la temperatu a convertir:");
    scanf("%f",&temperature);
    printf("la temperature en degre celsius %.2f est egale a %.2f en fahrenheit",temperature, temperature * 1.8 + 32);
return 0;

}