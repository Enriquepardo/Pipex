/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 19:13:17 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:19:37 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pt;

	if (nmemb == 0 || size == 0)
	{
		nmemb = 1;
		size = 1;
	}
	pt = malloc(nmemb * size);
	if (!pt)
		return (NULL);
	return (ft_memset(pt, 0, nmemb * size));
}
