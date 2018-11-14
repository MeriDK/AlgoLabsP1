#include <stdio.h>

int main (void)
{
    int n, k;
    
    printf ("Size of array is ");
    scanf ("%i", &n);
    
    int mas [n];
    
    for (int i = 0; i < n; i++)
    {
        printf ("%i number is ", i);
        scanf ("%i", &mas [i]);
    }
    
    printf ("Show array from elem ");
    scanf ("%i", &k);
    
    for (int i = 0; i < n; i++)
    {
        printf("%i ", mas[k]);
        k++;
        
        if (k == n)
        {
            k -= n;
        }
    }
    
    printf ("\n");
    
    for (int i = 0, a = 0; i < n; i++)
    for (int j = 0; j < n - i - 1; j++)
    {
        if (mas[j] > mas[j+1])
        {
            a = mas[j+1];
            mas[j+1] = mas[j];
            mas[j] = a;
        }
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas [i] % 2 != 0)
        {
            count++;
        }
    }
    
    int mas1 [count];
    count = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (mas [i] % 2 != 0)
        {
            mas1 [count] = mas [i];
            count++;
        }
    }
    
    while (count < k)
    {
        k -= count;
    }
    
    for (int i = 0; i < count; i++)
    {
        printf("%i ", mas1[k]);
        k++;
        
        if (k == count)
        {
            k -= count;
        }
    }
    
    printf ("\n");
    
    return 0;
}
