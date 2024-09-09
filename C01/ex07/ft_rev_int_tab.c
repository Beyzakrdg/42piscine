#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	tmp;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		tmp = tab[a];
		tab [a] = tab [b];
		tab [b] = tmp;
		a++;
		b--;
	}
}