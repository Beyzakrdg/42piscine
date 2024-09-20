#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    i--;

    int k = 0;
   
    while(k<i)
    {
        char tmp;
        tmp = str[i];
        str[i]=str[k];
        str[k]=tmp;
        k++;
        i--;
    
    }
    return str;
}

int main()
{
    char str[]="beyza";
    printf("%s",ft_strrev(str));
}