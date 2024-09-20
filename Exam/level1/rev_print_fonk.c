#include <unistd.h>

char *ft_rev_print (char *str)
{
    int i = 0;
    while(str[i])
    {
        i++;
    }
    int len = i -1;
    while(len>=0)
    {
        write(1,&str[len],1);
        len--;
    }
    return str;
}

int main(int argc,char *argv[])
{
    if(argc == 2)
    {
        ft_rev_print(argv[1]);
    }
    else{
        write(1,"\n",1);
    }
    return 0;   
}