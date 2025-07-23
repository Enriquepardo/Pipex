/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 21:16:04 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:13:11 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0'))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			s = (char *)haystack + i;
			while (needle[j] && haystack[i + j]
				&& (haystack[i + j] == needle[j]) && ((i + j) < len))
				j++;
			if (needle[j] == '\0')
				return (s);
		}
		i++;
	}
	return (0);
}
