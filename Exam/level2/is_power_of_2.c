#include <unistd.h>

int	    is_power_of_2(unsigned int n)
{
    unsigned int i=2;
    unsigned int j = 1;
    
    //if(n<1)
    //    return 0;
   
    while(i * j <= n)
    {
        if(i*j==n)
            return 1;
        j *=2;
    }
    return 0;
}
#include <stdio.h>
int main()
{
    printf("%d\n",is_power_of_2(16));
    printf("%d\n",is_power_of_2(24));
    printf("%d\n",is_power_of_2(2));
    printf("%d\n",is_power_of_2(8));
    printf("%d\n",is_power_of_2(0)); 
}