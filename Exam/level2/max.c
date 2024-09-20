#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int i = 0;
    while(i < len -1)
    {
        if(tab[i]>tab[i+1])
        {
            int tmp;
            tmp = tab[i];
            tab[i]=tab[i+1];
            tab[i+1]=tmp;
        }
        i++;
    }
    return (tab[i]);
}
int main()
{
    unsigned int len=6;
    int tab[]={12,23,43,54,58,9};
    int res=max(tab,len);
    printf("%d",res);
}