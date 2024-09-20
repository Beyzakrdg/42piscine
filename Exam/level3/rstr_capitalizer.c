#include <unistd.h>

char *lower(char *str)
{
    int i =0;
    while(str[i])
    {
        if((str[i] >='A' && str[i]<= 'Z'))
        str[i] +=32;
        
        i++;
    }
    return str;
}

void rcap(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i+1]==' ' || str[i+1] == '\t' || str[i+1]=='\0')
        {
            while(str[i] >='a' && str[i] <='z')
            str[i] -=32;
        }
        write(1,&str[i],1);
        i++;
    }
}

int main(int argc,char *argv[])
{
    if(argc>1)
    {
        int i = 1;
        while(i<argc)
        {
            argv[i] = lower(argv[i]);
            rcap(argv[i]);
            write(1,"\n",1);
            i++;
        }
    }
    else
    {
    write(1,"\n",1);
    }
}
    