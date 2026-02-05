#include <stdio.h>

int findGCD (int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return findGCD (y, x%y);
}
void main ()
{
    int x, y, gcd, max, min;
    printf ("Enter two numbers;");
    scanf ( "%d", &x );
    scanf ( "%d", &y);
    min = (x < y) ? x : y ;
    max = (x > y)? x : y ;
    printf ("GCD: %d", findGCD(x,y));
}
