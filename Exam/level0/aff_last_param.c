#include <unistd.h>

int main(int argc,char *argv[])
{
    if(argc>1)
    {
        int i = 0;
        int a = argc - 1;
        while(argv[a][i])
        {
            write(1,&argv[a][i],1);
            i++;
        }
        write(1,"\n",1);
    }
    else
    {
    write(1,"\n",1);
    }
    return 0;
}