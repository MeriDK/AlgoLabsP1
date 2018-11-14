#include <stdio.h>
#include <math.h>

int main (void)
{
    double a,b,c;
    
    printf ("get number a and b:\n");
    scanf ("%lf %lf", &a, &b);
    
    c = (pow(a+b,3) - pow(a,3)) / (3*a*b*b + pow(b,3) + 3*a*a*b);
    printf ("number c is %lf\n", c);
    
    return 0;
}
