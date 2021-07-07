/* Return 1 is addr is a valid IP address, return 0 otherwise */
/* valid ip is 255.255.255.255 or 0.0.0.0 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int count_point(const char *addr)
{
    int count;

    count = 0;
    for(int index = 0; addr[index]; index++)
    {
        if (addr[0] == '0')
            return (0);
        if (addr[index] == '.')
        {
            count++;
            if(addr[index + 1] == '0' || addr[index + 1] == '-')
                return (0);
        }
    }
    
    return count == 3 ? 1 : 0;
}

int valid_int(const char *addr)
{
    int tmp = 0;

    while (*addr)
    {
        if (*addr != '.' && *addr != '\0')
        {
            tmp *= 10;
            tmp += *addr - '0';
        }
        else
        {
            if (!(tmp >= 0 && tmp <= 255))
                { 
                   return (0);
                }
            tmp = 0;
        }
        addr++;
    }
    return (1);
}

int is_valid_ip(const char *addr) 
{
    if (count_point(addr))
    {
        if (valid_int(addr))
        {
            return (1);
        }
    }
    return (0);
};

int main(int argc, char **argv)
{
    if (argc)
        printf("result : %d\n", is_valid_ip(argv[1]));
    return (0);
}