#include <stdio.h>
#include <math.h>

int main (void)
{
    double x, sn, se, a, b, y, k, d, v;
    int n, j;
    
    a = -2;
    b = -0.1;
    k = (b - a)/10;
    x = a;
    n = 40;
    
    while (x <= b)
    {
        y = log (1 / (2 + 2 * x + x * x));
        
        sn = 0;
        for (int i = 1; i < n + 1; i++)
        {
            d = pow (-1, i) * pow (1 + x, 2 * i) / i;
            sn = sn + d;
        }
        
        j = 0;
        se = 0;
        do
        {
            j++;
            v = pow (-1, j) * pow (1 + x, 2 * j) / j;
            se = se + v;
            if (v < 0)
            {
                v = -v;
            }
        }
        while (v >= 0.0001);
        
        printf ("%lf %lf %lf %lf\n", x, sn, se, y);
        
        x = x + k;
    }
    
}
