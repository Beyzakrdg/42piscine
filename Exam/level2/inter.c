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

void    inter(char *str1,char *str2)
{
    int i = 0;
    int j;
    while(str1[i])
    {
        j = 0;
        while(str2[j])
        {
            if(str1[i] == str2[j])
            {
                if(check(str1,str1[i],i)==1)
                {
                    write(1,&str1[i],1);
                    break;
                }               
            }
            j++;
        }
        i++;
    }
}

int main(int argc,char *argv[])
{
    if(argc ==3)
    {
        inter(argv[1],argv[2]);
    }
    write(1,"\n",1);
    return 0;
}