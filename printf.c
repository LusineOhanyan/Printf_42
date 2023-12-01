/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 14:51:26 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/20 17:03:24 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	printf_norme(va_list var, char *str, int i, int *count)
{
	if (str[i + 1] == 'c')
		ft_putchar(va_arg(var, int), count);
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(var, char *), count);
	else if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(var, int), count);
	else if (str[i + 1] == 'u')
		ft_putnbr1(va_arg(var, unsigned int), count);
	else if (str[i + 1] == 'x')
		ft_hexa(va_arg(var, int), count);
	else if (str[i + 1] == 'X')
		ft_hexa1(va_arg(var, int), count);
	else if (str[i + 1] == '%')
		ft_putchar('%', count);
	else if (str[i + 1] == 'p')
		print_point(va_arg(var, size_t), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	var;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(var, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printf_norme(var, (char *)str, i, &count);
			i += 2;
		}
		else
		{
			ft_putchar(str[i], &count);
			++i;
		}
	}
	va_end(var);
	return (count);
}
