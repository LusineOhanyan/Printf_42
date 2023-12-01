/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lohanyan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 16:47:46 by lohanyan          #+#    #+#             */
/*   Updated: 2022/06/18 12:18:17 by lohanyan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>

void	ft_putchar(char c, int *count);
void	ft_putstr(char	*str, int *count);
void	ft_putnbr(int nb, int *count);
void	ft_putnbr1(unsigned	int nb, int *count);
void	ft_hexa(unsigned int nb, int *count);
void	ft_hexa3(size_t nb, int *count);
void	ft_hexa1(unsigned int nb, int *count);
void	print_point(size_t i, int *count);
int		ft_printf(const char	*str, ...);

#endif
