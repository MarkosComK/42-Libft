/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:06:39 by marsoare          #+#    #+#             */
/*   Updated: 2024/06/09 21:04:09 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_read(int fd, char *backup)
{
	int		check_read;
	char	*buf;

	buf = get_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	check_read = 1;
	while (!(get_strchr(backup, '\n')) && check_read != 0)
	{
		check_read = read(fd, buf, BUFFER_SIZE);
		if (check_read < 0)
		{
			free(buf);
			free(backup);
			return (NULL);
		}
		buf[check_read] = 0;
		backup = get_strjoin(backup, buf);
	}
	free(buf);
	return (backup);
}

char	*get_line(char *backup)
{
	int		i;
	char	*line;

	i = 0;
	if (backup[0] == 0)
		return (NULL);
	while (backup[i] && (backup[i] != '\n'))
		i++;
	line = get_calloc(sizeof(char), (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (backup[i] && (backup[i] != '\n'))
	{
		line[i] = backup[i];
		i++;
	}
	if (backup[i] == '\n')
	{
		line[i] = backup[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_rest(char *backup)
{
	int		i;
	int		rest_i;
	char	*rest;

	i = 0;
	while (backup[i] && (backup[i] != '\n'))
		i++;
	if (!backup[i])
	{
		free(backup);
		return (NULL);
	}
	rest = get_calloc(sizeof(char), (ft_strlen(backup) - i + 1));
	if (!rest)
	{
		free(rest);
		return (NULL);
	}
	++i;
	rest_i = 0;
	while (backup[i])
		rest[rest_i++] = backup[i++];
	rest[rest_i] = '\0';
	free(backup);
	return (rest);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*backup;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	backup = get_read(fd, backup);
	if (!backup)
		return (NULL);
	line = get_line(backup);
	backup = get_rest(backup);
	return (line);
}
