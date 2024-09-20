#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int i = 0;
    int size = 0;
    int *res;
    if(start >= end)
    {
        size = start - end;
    }
    else if(end>start)
    {
        size = end - start;
    }
    res = (int *)malloc(sizeof(int) * (size + 1));
    if(!res)
    return 0;
    while(start>=end)
    {
        res[i] = end;
        end++;
        i++;
    }
    while(start <= end)
    {
        res[i]=end;
        end--;
        i++;
    }
    return res;
}
#include <stdio.h>

int main()
{
    int start=3;
    int end=3;
    int *res;
    res=ft_rrange(start,end);
    int size = 0;
     if(start >= end)
    {
        size = start - end+1;
    }
    else if(end>start)
    {
        size = end - start+1;
    }
    int i =0;
    while(i<size)
    {
        printf("%d ",res[i]);
        i++;
    }
    free(res);
}