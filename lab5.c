#include <stdio.h>
#include <stdbool.h>
#define c 100

int func (int M[c][c], int m);

int main (void)
{
    int mas [c][c] = {};
    int n;

    printf ("get n (2-10)\n");
    do
    {
        scanf ("%i", &n);
    }
    while (n < 2 || n > 10);

    printf ("your elements\n");
    for (int i = 0; i < n; i++)
    {
        printf ("%i is: ", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf ("%i", &mas [i][j]);
        }
    }

    printf ("result is %i\n", func(mas, n));
}

int func (int M[c][c], int m)
{
    int count = 0;
    int diag [c];
    for (int i = 0; i < m; i++)
    {
            diag [i] = M [i][i];
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            bool h = true;
            for (int k = 0; k < m; k++)
            {
                if (M [i][j] <= diag [k])
                {
                    h = false;
                }
            }
            if (h == true)
            {
                count++;
            }
        }
    }
    return count;
}
