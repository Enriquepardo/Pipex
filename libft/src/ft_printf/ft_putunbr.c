/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 11:24:56 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/08 21:16:46 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

void	ft_putunbr(unsigned int n, int *count)
{
	if (n >= 10)
		ft_putunbr((n / 10), count);
	ft_putchar((n % 10) + '0', count);
}
