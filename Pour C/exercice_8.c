#include <stdio.h> 
 
int main(){
int n = 543 ;
int p=5;
float x = 34.5678 ;

    printf ("A : %d, %f ", n, x);
    printf ("B : %4d, %10f", n, x);
    printf ("C : %2d, %3f", n, x);
    printf ("D : %10.3f, %10.3e", x, x);
    printf ("E : %-5d, %f", n,x);
    printf ("F : %*d", p, n);
    printf ("G : %*.*f", 12, 5, x);
    printf ("H : %x : %8x :", n, n);
    printf ("I : %o : %8o :", n, n);
return 1 ;
}