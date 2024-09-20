#include <stdio.h>

int lenn(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == 'a')
        {
            return i;
            break;
        }
        else
        i++;
    }
    return i;
}
