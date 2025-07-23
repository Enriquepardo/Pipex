/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 20:57:55 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:12:23 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*destcopy;
	const unsigned char	*srccopy;

	destcopy = dest;
	srccopy = src;
	if (n == 0 || src == dest)
		return (dest);
	while (n > 0)
	{
		*destcopy = *srccopy;
		destcopy++;
		srccopy++;
		n--;
	}
	return (dest);
}
