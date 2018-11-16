#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main (void)
{
    char str [255];

    printf("Enter a string : ");
    "ok"
    fgets(str, sizeof(str), stdin);

    int n = strlen (str);

    for (int i = 0; i < n - 1; i++)
    {
        if ((str[i] == ' ' && str[i + 1] != ' ') || (i == 0 && str[i] != ' '))
        {
            int counter = 0;
            int k;

            if (i == 0 && str[i] != ' ')
            {
                k = i;
            }
            else
            {
                k = i + 1;
            }

            while (str[k] != ' ')
            {
                if (isdigit (str[k]))
                {
                    counter++;
                }
                k++;
                if (k == n)
                {
                    break;
                }
            }

            if (counter == 1)
            {
                if (i == 0 && str[i] != ' ')
                {
                    k = i;
                }
                else
                {
                    k = i + 1;
                }
                while (str[k] != ' ')
                {
                    printf ("%c", str[k]);
                    k++;
                    if (k == n)
                    {
                        break;
                    }
                }
                printf (" ");
            }
        }
    }
    return 0;
}
