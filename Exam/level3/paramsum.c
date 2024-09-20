#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_putnbr(int nbr)
{
    if(nbr == -2147483648)
    {
        write(1,"-2147483648",11);
    }
    else if(nbr < 0)
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

int main(int argc,char *argv[])
{
    if(argc > 1)
    {
        ft_putnbr(argc-1);
        write(1,"\n",1);
    }
    else
    {
    write(1,"0\n",1);
    }
    return 0;
}