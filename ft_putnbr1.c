/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 21:26:15 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/17 21:26:45 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	ft_putnbr1(unsigned int nb, int *count)
{
	char	c;

	if (nb <= 9)
	{
		c = nb + 48;
		ft_putchar(c, count);
		return ;
	}
	else
		ft_putnbr1(nb / 10, count);
	ft_putnbr1(nb % 10, count);
}
