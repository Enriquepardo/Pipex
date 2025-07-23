/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:23:11 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:12:26 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*copy;

	copy = str;
	while (n > 0)
	{
		*copy = (unsigned char)c;
		copy++;
		n--;
	}
	return (str);
}
