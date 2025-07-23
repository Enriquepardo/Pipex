/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:02:22 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/08 21:16:44 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	ft_putstr(char *s, int *count)
{
	size_t	i;

	i = 0;
	if (!s)
		ft_putstr("(null)", count);
	else
	{
		while (s[i])
		{
			write(1, &s[i], 1);
			i++;
			(*count)++;
		}
	}
}
