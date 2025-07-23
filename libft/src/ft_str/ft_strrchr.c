/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 20:11:22 by enpardo-          #+#    #+#             */
/*   Updated: 2025/05/13 11:13:22 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	ch;
	char	*lastch;

	lastch = NULL;
	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			lastch = (char *)str;
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (lastch);
}
