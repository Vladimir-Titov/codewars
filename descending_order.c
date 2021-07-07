#include <inttypes.h>
#include <stdio.h>
uint64_t descendingOrder(uint64_t n)
{
    uint64_t result;

    result = 0;
    while (n > 0)
    {
        result *= 10;
        result += n % 10;
        n = n / 10;
    }
    return (result);
}

int main()
{
    printf("%I64d", descendingOrder(123456789));
    return (0);
}
