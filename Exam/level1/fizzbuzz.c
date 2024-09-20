#include <stdio.h>
#include <unistd.h>

void ft_puchar(char a)
{
    write(1,&a,1);
}

void ft_putnbr(int nbr)
{
    if(nbr <0)
    {
        write(1,"-",1);
        nbr = -nbr;
        ft_putnbr(nbr);
    }

    else if(nbr > 9)
    {
        ft_putnbr(nbr/10);
        ft_putnbr(nbr%10);
    }
    else
    {
        ft_puchar(nbr + '0');
    }
}
int main()
{
    int nbr=1;
    while(nbr <= 300)
    {
        if(nbr % 3 == 0 || nbr % 5 == 0)
        {
        
            if(nbr % 5 == 0 && nbr % 3 ==0)
            {
                write(1,"fizzbuzz",8);
            }
            else if(nbr % 5 == 0)
            {
                write(1,"buzz",4);
            }
            else
            {
                write(1,"fizz",4);
            }
            write(1,"\n",1);
            nbr++;
        }
        else
        {
            ft_putnbr(nbr);
            write(1,"\n",1);
            nbr++;
        }
    }
    return 0;
}