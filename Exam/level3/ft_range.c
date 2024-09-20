#include <stdlib.h>
#include <stdio.h>

int     *ft_range(int start, int end)
{
    int size = 0;
    if(start>=end)
    {
        size = start - end ;

    }
    else if(start < end)
    {
        size = end - start;
    }
    int *res;
    res= (int *)malloc(sizeof(int)* (size +1));
    if(!res)
    return 0;
    int i = 0;
    while(start>=end)
    {
        res[i]=start;
        start--;
        i++;
    }
    while(start<=end)
    {
        res[i]=start;
        start++;
        i++;
    }
    return res;
}

int main()
{
    int start=2;
    int end=-3;
    int size= 0;
    int *tab;
    tab = ft_range(start,end);
    if(start>=end)
    {
        size = start - end +1;

    }
    else if(start < end)
    {
        size = end - start+1;
    }
    int i  =0;
    while(i<size)
    {
        printf("%d ",tab[i]);
        i++;
    }
    free(tab);
}