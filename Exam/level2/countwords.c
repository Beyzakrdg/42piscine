#include <stdio.h>

int count_words(char *str)
{
    int i = 0;
    int count = 0;
    while(str[i])
    {
        if(str[i] == ' ' || str[i] == '\t')
        {
            count++;
        }
        i++;
    }
    return (count + 1);
}

int main()
{
    char str[]="gh fghjk fghjkl rtyuıo şlkjhg rtyuıop vfghj 678fd 567 5678";
    printf("%d",count_words(str));
}

/*int count_words(char *str)
{
    int i=0;
    int cont=0;
    while(str[i])
    {
        if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
        {
            if(str[i+1] == 32 || str[i+1] == '\0')
            {
                cont++;
            }
        }
        i++;
    }
    return cont;
}*/