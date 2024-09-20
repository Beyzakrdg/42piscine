#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    int m = 0;
    if (argc == 3)
    {
        while (argv[2][j])
        {
            if (argv[1][m] == argv[2][j] && argv[1][m])
            {
                m++;
            }
            j++;
        }
        if (argv[1][m+1] != '\0')
        {
            i=0;
            while (argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return 0;
}