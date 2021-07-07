#include <stdio.h>
#include <stdlib.h>

char *create_phone_number(char phnum[15], const unsigned char nums[10])
{
    int index = 0;
    int j = 0;

    while (index < 15)
    {
        if (index == 0)
            {
                phnum[index] = '(';
                index++;
                continue ;
            }   
        else if(index == 4)
            {
                phnum[index] = ')';
                index++;
                continue ;
            }   
        else if(index == 5)
            {
                phnum[index] = ' ';
                index++;
                continue ;
            }   
        else if(index == 9)
            {
                phnum[index] = '-';
                index++;
                continue ;
            }   
        else
            phnum[index] = nums[j] + 48;
        index++;
        j++;
    }
    phnum[14] = '\0';
    return phnum;
}

int main()
{
    char phnum[15];
    unsigned char nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    create_phone_number(phnum, nums);
    printf("%s\n", phnum);
    return (0);
}