#include <stdio.h>

unsigned __int128 factorial(unsigned n)
{
    if (n == 1)
        return (n);
    return (n * (factorial(n - 1)));
}

int main()
{
    printf("%d\n", factorial(10));
    return (0);
}