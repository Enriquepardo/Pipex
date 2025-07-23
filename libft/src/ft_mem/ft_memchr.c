/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:16:02 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:12:19 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*sh;

	i = 0;
	ch = c;
	sh = (unsigned char *)s;
	while (i < n)
	{
		if (sh[i] == ch)
			return (sh + i);
		i++;
	}
	return (0);
}
