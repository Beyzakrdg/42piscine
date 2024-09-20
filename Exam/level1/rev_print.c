#include <unistd.h>

int main(int argc,char *argv[])
{
    int i=0;
    if(argc ==2)
    {
        while(argv[1][i])
        {
            i++;
        }
        int j = i-1;
        while(j >= 0)
        {
        while(argv[1][j])
        {
            write(1,&argv[1][j],1);
            j--;
        }
        }

    }
    write(1,"\n",1);
    return 0;
}