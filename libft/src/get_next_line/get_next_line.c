/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enpardo- <enpardo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:09:44 by enpardo-          #+#    #+#             */
/*   Updated: 2025/07/21 01:27:48 by enpardo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/get_next_line.h"
#include "../../inc/libft.h"

static char	*read_and_store(int fd, char *storage)
{
	char	buffer[BUFFER_SIZE + 1];
	int		bytes_read;
	char	*temp;

	if (!storage)
		storage = ft_strdup("");
	bytes_read = 1;
	while (!ft_strchr(storage, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
			return (free(storage), NULL);
		buffer[bytes_read] = '\0';
		temp = ft_strjoin(storage, buffer);
		free(storage);
		storage = temp;
	}
	return (storage);
}

char	*get_next_line(int fd)
{
	static char	*storage;
	char		*line;
	char		*temp;
	int			len;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	storage = read_and_store(fd, storage);
	if (!storage || !*storage)
		return (free(storage), storage = NULL, NULL);
	len = 0;
	while (storage[len] && storage[len] != '\n')
		len++;
	line = ft_substr(storage, 0, len + (storage[len] == '\n'));
	temp = ft_strdup(storage + len + (storage[len] == '\n'));
	free(storage);
	storage = temp;
	if (!*line)
		return (free(line), NULL);
	return (line);
}
