/*24.  Написати функцію (або макровизначення), що знаходить довжину сторони за координатами його точок..
Написати функцію square, що обчислює площу трикутника, заданого координатами вершин.
Написати функцію  squaren c змінною кількістю параметрів, що визначає площу опуклого багатокутника, заданого координатами своїх вершин.*/


#include <stdio.h>
#include <math.h>
#include <stdbool.h>

float length (int x1, int y1, int x2, int y2);
float square (int x1, int y1, int x2, int y2, int x3, int y3);
float squaren (int n, ...);

int main (void)
{
    printf ("Length between (0;5) and (12;0) is %0.0f\n\n", length (0, 5, 12, 0));

    printf ("(0;0) (0;5) (12;0) \nSquare is %0.0f\n\n", square (0, 0, 0, 5, 12, 0));

    printf ("(0;0) (0;4) (2;6) (6;6) (8;4) (8;0)\n");
    printf ("Square is %0.0f\n", squaren (6, 0, 0, 0, 4, 2, 6, 6, 6, 8, 4, 8, 0));
}

float length (int x1, int y1, int x2, int y2)
{
    int leny, lenx;
    float len;

    lenx = x2 - x1;
    leny = y2 - y1;
    len = sqrt (lenx*lenx + leny*leny);

    return len;
}

float square (int x1, int y1, int x2, int y2, int x3, int y3)
{
    float len1, len2, len3, piv_per, square;

    len1 = length (x1, y1, x2, y2);
    len2 = length (x2, y2, x3, y3);
    len3 = length (x3, y3, x1, y1);
    piv_per = (len1 + len2 + len3) / 2;
    square = sqrt(piv_per * (piv_per - len1) * (piv_per - len2) * (piv_per - len3));

    return square;
}

float squaren (int n,...)
{
    int* p = &n;
    n *= 2;
    int mas[100] = { };
    float res = 0;

    for (int i = 0; i < n; i++)
    {
        mas[i] = *(++p);
    }

    for (int i = 2; i < n - 2; i = i + 2)
    {
        res += square (mas[0], mas[1], mas[i], mas[i+1], mas[i+2], mas[i+3]);
    }

    return res;
}
