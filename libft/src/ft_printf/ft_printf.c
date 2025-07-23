/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 10:56:19 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/08 21:17:48 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	ft_format(va_list args, char spec, int *count)
{
	if (spec == 'c')
		ft_putchar(va_arg(args, int), count);
	else if (spec == 's')
		ft_putstr(va_arg(args, char *), count);
	else if (spec == 'p')
		ft_putptr(va_arg(args, void *), count);
	else if (spec == 'd' || spec == 'i')
		ft_putnbr(va_arg(args, int), count);
	else if (spec == 'u')
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (spec == 'x')
		ft_puthex(va_arg(args, unsigned int), 0, count);
	else if (spec == 'X')
		ft_puthex(va_arg(args, unsigned int), 1, count);
	else if (spec == '%')
		ft_putchar('%', count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			ft_format(args, format[i + 1], &count);
			i++;
		}
		else
			ft_putchar(format[i], &count);
		i++;
	}
	va_end(args);
	return (count);
}
