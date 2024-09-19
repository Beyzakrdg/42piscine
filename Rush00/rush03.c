/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 15:58:07 by bekarada          #+#    #+#             */
/*   Updated: 2024/09/03 15:58:09 by bekarada         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	h;
	int	v;

	if (x < 1 || y < 1)
		return ;
	h = 1;
	while (h <= y)
	{
		v = 1;
		while (v <= x)
		{
			if ((h == 1 || h == y) && v == 1)
				ft_putchar('A');
			else if ((h == 1 || h == y) && v != 1 && v == x)
				ft_putchar('C');
			else if (((h == 1 || h == y) && (v != 1 || v != x)) 
				|| (h != 1 && h != y) && (v == 1 || v == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			v++;
		}
		ft_putchar('\n');
		h++;
	}
}
