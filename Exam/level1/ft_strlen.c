#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    return i;
}

int main()
{
    char str[]="denemeyapiyorum";
    printf("%d",ft_strlen(str));
    return 0;
}