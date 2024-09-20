#include <unistd.h>

int main(int argc,char *argv[])
{
    (void)argc;
    (void)argv;
    char c= '9';
    while(c>='0')
    {
        write(1, &c, 1);
        c--;
    }
    write(1,"\n",1);
    return 0;
}