/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:31:29 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:19:36 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*copy;

	copy = str;
	while (n > 0)
	{
		*copy = 0;
		copy++;
		n--;
	}
}
