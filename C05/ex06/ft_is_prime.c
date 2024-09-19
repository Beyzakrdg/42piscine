/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42istanbul.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:45:32 by bekarada          #+#    #+#             */
/*   Updated: 2024/08/26 16:08:33 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	cont;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	else
	{
		while (i < nb)
		{
			cont = nb % i;
			if (cont == 0)
				return (0);
			i++;
		}
		return (1);
	}
}
