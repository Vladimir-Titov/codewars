#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


bool validParentheses(const char *str_in) 
{
    bool    result = true;
    int     counter = 0;

    while (*str_in)
    {
        if (*str_in == '(')
            counter++;
        else if (*str_in == ')')
            counter--;
        if (counter < 0)
            return false;
        str_in++;
    }
    return counter == 0 ? true : false;
}

int main(int argc, char **argv)
{   
    if (argc)
        printf("result: %d\n", validParentheses(argv[1]));
    return (0);
}