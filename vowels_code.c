#include <stdlib.h>
#include <string.h>
#include <stdio.h>


char    tmp1[100];
char    tmp2[100];
char *encode(const char *string) {
    
    int     i = 0;

    while (string[i])
    {
        if (string[i] == 'a')
            tmp1[i] == '1';
        else if (string[i] == 'e')
            tmp1[i] = '2';
        else if (string[i] == 'i')
            tmp1[i] = '3';
        else if (string[i] == 'o')
            tmp1[i] = '4';
        else if (string[i] == 'u')
            tmp1[i] = '5';
        else
            tmp1[i] = string[i];
        i++;
    }
    tmp1[i] = '\0';
    return tmp1;
}



char *decode(const char *string) {

    int     i = 0;

    while (string[i])
    {
        if (string[i] == '1')
            tmp2[i] == 'a';
        else if (string[i] == '2')
            tmp2[i] = 'e';
        else if (string[i] == '3')
            tmp2[i] = 'i';
        else if (string[i] == '4')
            tmp2[i] = 'o';
        else if (string[i] == '5')
            tmp2[i] = 'u';
        else
            tmp2[i] = string[i];
        i++;
    }
    tmp2[i] = '\0';
    return tmp2;
}

int main(int argc, char **argv)
{
    if (argc)
        printf("%s\n", encode(argv[1]));
    return (0);
}
