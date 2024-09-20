#include <unistd.h>


char *uppercas(char *str)
{
    int i= 0;
    while(str[i])
    {
        if(str[i]>='A' && str[i]<='Z')
        str[i] +=32;
        
        i++;
    }
    return str;
}

void capi(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[0] >='a' &&str[0]<='z')
        {
            str[0] -=32;
        }
        if((str[i-1] == ' ' || str[i-1]=='\t'|| str[i] == '\0')&& (str[i] >='a' &&str[i]<='z'))
        {
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
        argv[i]=uppercas(argv[i]);
        capi(argv[i]);
        write(1,"\n",1);
        i++;
        }
    }
    else{
        write(1,"\n",1);
    }
    return 0;
}