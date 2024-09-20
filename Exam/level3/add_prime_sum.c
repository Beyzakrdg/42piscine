#include <unistd.h>

void ft_putchar(char a)
{
    write(1,&a,1);
}

void ft_putnbr(int nbr)
{
    if(nbr == -2147483648)
    write(1,"-2147483648",11);
    else if(nbr <0 )
    {
        write(1,"-",1);
        nbr = -nbr;
        write(1,&nbr,1);
    }
    else if(nbr > 9)
    {
        ft_putnbr(nbr/10);
        ft_putnbr(nbr%10);
    }
    else
    {
        ft_putchar(nbr+'0');
    }
}

int atoi(char *str)
{
    int sign = 1;
    int result =0 ;
    int i = 0;
    while(str[i] ==' ' || (str[i] >=9 && str[i]<=13))
    i++;
    if(str[i] == '-' || str[i] =='+')
    {
        if(str[i] == '-')
        sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i]<= '9')
    {
        result = result * 10 +str[i] -'0';
        i++;
    }
    return (result * sign);
}

int is_prime(int nb)
{
    int i = 2;
    if(nb <2)
    return 0;
    else if(nb==2)
    return 1;
    while(nb >i)
    {
        if(nb % i == 0)
        return 0;
        i++;
    }
    return 1;
}

int main(int argc,char *argv[])
{
    int total=0;
    int i = 0;
    if(argc == 2)
    {
    int nb=atoi(argv[1]);
    while(nb>0)
    {
        if(is_prime(nb) == 1)
        {
            
                total +=nb;
            }
            nb--;
    }
    ft_putnbr(total);
    write(1,"\n",1);
    }
else if(argc !=2)
    write(1,"0\n",2);   
    return 0;
}