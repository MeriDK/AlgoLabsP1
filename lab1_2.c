#include <stdio.h>
#include <math.h>

int main (void)
{
    int n, m;
    
    printf ("get number n and m:\n");
    scanf ("%i %i", &n, &m);
    
    printf ("first res is %i\n", n++ * m);
    n--;
    
    printf ("%s\n", (n++ < m) ? "true" : "false");
    n--;
    
    printf ("%s\n", (n-- > m) ? "true" : "false");
    
    return 0;
}
