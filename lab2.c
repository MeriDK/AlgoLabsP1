#include <stdio.h>
#include <math.h>

#define M_E 2.718281

int main (void)
{
    int n = 9;
    double s = 0;
    double a = 0;
    
    for (int i = 0; i < n; i++)
    {
    a = pow (M_E, -sqrt(i));
    s = s + a;
    }
    
    printf("%lf\n", s);
}
