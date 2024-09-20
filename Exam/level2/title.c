#include <unistd.h>

int main(int argc,char *argv[])
{
	if(argc == 2)
	{
		//int j = 0;
		/*while(argv[1][j])
		{
			j++;
		}
		j--;*/
		int i = 0;
		while(argv[1][i])
		{

			if(argv[1][0] >= 'a' && argv[1][0] <='z')
			{
				argv[1][i] -= 32;
				
			}
			else if((argv[1][i-1] == ' ' || argv[1][i-1] == '\t') && argv[1][i] != ' ')
			{
				if((argv[1][i] >= 'a' && argv[1][i] <='z'))
				argv[1][i] -= 32;
				
			}
			if(argv[1][i] == 32 && argv[1][i+1] == '\0')
			{
				break;
			}
			write(1,&argv[1][i],1);
			i++;
			}
	}
	write(1,"\n",1);
	return 0;
}