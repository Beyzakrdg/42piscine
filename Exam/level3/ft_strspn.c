#include <string.h>
#include <stdio.h>

char *check(char *str,char a)
{
	int i = 0;
	int count =0;
	while(str[i])
	{
		if(str[i] == a)
		{
			return ((char *)str);
		}
		i++;
	}
	return 0;
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;
	while(s[i])
	{
			if(check((char *)accept,s[i])==0)
			{
				break;
			}
			i++;
	}
	return i;
}

int main()
{
	char s[]="fdfnj";
	char accept[]="gişlkjhgfd";
	printf("%zu",ft_strspn(s,accept));
	printf("%zu",strspn(s,accept));
}