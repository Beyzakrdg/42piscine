#include <unistd.h>

int main(int argc,char *argv[])
{
    if(argc == 3)
    {
        int i = 0;
        int j = 0;
        int count = 0;
        int k  =0;
        int m = 0;
        while(argv[1][i])
        {
            i++;
        }
        while(argv[2][j])
        {
            if(argv[1][m]==argv[2][j])
            {
                m++;
                count++;
            }
            j++;
        }
        if(count == i)
        {
            write(1,"1",1);
        }
        else
        {
            write(1,"0",1);
        }
    }
    write(1,"\n",1);
    return 0;
}