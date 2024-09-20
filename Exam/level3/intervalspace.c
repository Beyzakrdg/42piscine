#include <unistd.h>

int main(int argc,char *argv[])
{
	if(argc ==2)
	{
		int i = 0;
		while(argv[1][i])
		{
			i++;
		}
		i--;
		int j = 0;
		while(argv[1][j])
		{
			write(1,&argv[1][j],1);
			if(j < i)
			{
				write(1,"   ",3);
			}
			j++;
		}
	}
	write(1,"\n",1);
	return 0;
}