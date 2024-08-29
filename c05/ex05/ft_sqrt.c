/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bekarada <bekarada@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:52:34 by bekarada          #+#    #+#             */
/*   Updated: 2024/08/25 14:19:21 by bekarada         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i * i <= nb)
		{
			if (nb == i * i)
				return (i);
			i++;
		}
	}
	return (0);
}
