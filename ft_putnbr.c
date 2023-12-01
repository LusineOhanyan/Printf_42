/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:25:10 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/17 21:26:04 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr(int nb, int *count)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', count);
	}
	if (n <= 9)
	{
		c = n + 48;
		ft_putchar(c, count);
		return ;
	}
	else
		ft_putnbr(n / 10, count);
	ft_putnbr(n % 10, count);
}
