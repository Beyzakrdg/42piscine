int	ft_atoi(const char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    i++;
    if(str[i] == '-' || str[i] =='+')
    {
        if(str[i] == '-')
        sign = -1;
    }
    i++;
    while(str[i]>='0' && str[i]<= '9')
    {
        result = result * 10 + str[i] -'0';
        i++;
    }
    return (sign * result);
}

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("%d\n",ft_atoi("--43"));
    printf("%d\n",atoi("--43"));
    printf("%d\n",ft_atoi("-4ghj3"));
    printf("%d\n",atoi("-4vbn3"));
}