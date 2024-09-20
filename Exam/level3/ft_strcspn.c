#include <stdio.h>
#include <string.h>


size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(reject[j])
		{
			if(s[i] == reject[j])
			{
				return i;
			}
			i++;
		}
		j++;
	}
	return 0;
}

int main()
{
	const char s[]="fghjklş";
	const char reject[]="h";
	printf("%zu",ft_strcspn(s,reject));
	printf("%lu",strcspn(s,reject));
}
