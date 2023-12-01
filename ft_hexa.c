/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:20:48 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/19 13:30:02 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_hexa(unsigned int nb, int *count)
{
	char	array[50];
	char	tmp;
	int		i;

	i = 0;
	if (nb == 0)
		ft_putchar('0', count);
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp <= 9)
			array[i++] = tmp + 48;
		else
			array[i++] = tmp + 55 + 32;
		nb = nb / 16;
	}	
	i--;
	while (i >= 0)
	{
		ft_putchar(array[i], count);
		i--;
	}
}

void	ft_hexa3(size_t nb, int *count)
{
	char	array[50];
	char	tmp;
	int		i;

	i = 0;
	while (nb != 0)
	{
		tmp = nb % 16;
		if (tmp <= 9)
			array[i++] = tmp + 48;
		else
			array[i++] = tmp + 55 + 32;
		nb = nb / 16;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(array[i], count);
		i--;
	}
}

void	print_point(size_t	i, int *count)
{
	if (i == 0)
	{
		ft_putstr("0x0", count);
	}
	else
	{
		ft_putchar('0', count);
		ft_putchar('x', count);
		ft_hexa3(i, count);
	}
}
