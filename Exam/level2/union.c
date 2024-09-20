#include <unistd.h>

int check(char *str,char a,int size)
{
    int i = 0;
    while(i < size)
    {
        if(str[i] == a)
        return 0;
        i++;
    }
    return 1;
}

int check2(char *str,char a)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] == a)
        return 0;
        i++;
    }
    return 1;
}

void    ft_union(char *str1,char *str2)
{
    int i = 0;
    while(str1[i])
    {
        if(check(str1,str1[i],i)==1)
        write(1,&str1[i],1);
        i++;
    }
    int j = 0;
    while(str2[j])
    {
        if(check2(str1,str2[j])==1)
        {
            if(check(str2,str2[j],j)==1)
            {
                write(1,&str2[j],1);
            }            
        }
        j++;
    }
}

int main(int argc,char *argv[])
{
    if(argc==3)
    {
        ft_union(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return 0;
}