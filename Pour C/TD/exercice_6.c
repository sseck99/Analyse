#include <stdio.h>
# include <math.h>
int main(void)
{
    float a, b, c, X1, X2, X0, delta;
    
        printf("Entrez a, b, c : ");
        scanf("%lf %lf %lf", &a, &b, &c);

    delta = b*b-4*a*c;

    if(delta > 0)
    {
        X1 = (-b+sqrt(delta))/2*a;
        X2 = (-b-sqrt(delta))/2*a;
        printf("Equation admet deux solution X1=%f et X2=%f\n",X1,X2);

    }else if (delta = 0)
    {
        X0 = -b/2*a ;
        printf("Equation admet une unique solution X0=%f\n",X0);

    }else if (delta < 0)
    {
        printf("Equation admet pas de solution dans R\n");
    }

    return 0;
}
