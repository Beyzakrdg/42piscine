#include <unistd.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i]<= 13))
	i++;
	if(str[i] == '-' || str[i] =='+')
	{
		if(str[i] == '-')
		{
			sign = -1;
		}
		i++;
	}
	while(str[i] >='0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_putnbr(int nbr)
{
	if(nbr<0)
	{
		write(1,"-",1);
		nbr = -nbr;
		ft_putnbr(nbr);
	}
	else if(nbr>9)
	{
		ft_putnbr(nbr/10);
		ft_putnbr(nbr%10);
	}
	else
	{
		ft_putchar(nbr + '0');
	}
}


void mult(char *s)
{
    int a = ft_atoi(s);
    char i  ='1';
    int j = 1;
    while(i<='9')
    {
    write(1,&i,1);
    write(1," x ",3);
    ft_putnbr(a);
    write(1," = ",3);
    int b = j * a;
    ft_putnbr(b);
    write(1,"\n",1);
    i++;
    j++;
    } 
}

int main(int argc,char *argv[])
{
    if(argc == 2)
    {
       //(int a= ft_atoi(argv[1]);
        mult(argv[1]);
        write(1,"\n",1);
    }
    else
    {
    write(1,"\n",1);
    }
    return 0;
}