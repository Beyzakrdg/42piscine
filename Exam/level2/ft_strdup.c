#include <stdlib.h>
#include <stdio.h>

char    *ft_strdup(char *src)
{
    char *dest;
    int i = 0;
    while(src[i])
    {
        i++;
    }
    dest = (char *)malloc(sizeof(char) * (i + 1));
    if(!dest)
    return 0;
    i = 0;
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main()
{
    char src[]="beyzakarda";
    char dest[13];
    printf("%s",ft_strdup(src));
}