/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:20:16 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/17 21:34:50 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hexa1(unsigned int nb, int *count)
{
	int		i;
	char	array[50];
	char	tmp;

	i = 0;
	if (nb == 0)
		ft_putchar('0', count);
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp <= 9)
		{
			array[i] = tmp + 48;
			i++;
		}
		else
		{
			array[i] = tmp + 55;
			i++;
		}
		nb = nb / 16;
	}
	while (--i >= 0)
		ft_putchar(array[i], count);
}
