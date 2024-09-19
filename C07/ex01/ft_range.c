/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42istnbul.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 12:44:07 by bekarada          #+#    #+#             */
/*   Updated: 2024/09/01 15:56:40 by bekarada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*res;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * (size));
	if (res == NULL)
		return (NULL);
	size = 0;
	while (max > min)
	{
		res[size] = min;
		min++;
		size++;
	}
	return (res);
}
