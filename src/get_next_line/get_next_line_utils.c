/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 18:20:28 by marsoare          #+#    #+#             */
/*   Updated: 2024/06/09 21:16:43 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_strjoin(char *s1, char *s2)
{
	char		*endstr;
	size_t		totlen;
	int			i;
	int			j;

	totlen = get_strlen(s1) + get_strlen(s2);
	endstr = get_calloc(sizeof(char), (totlen + 1));
	if (!endstr)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		endstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		endstr[i++] = s2[j++];
	free(s1);
	return (endstr);
}

size_t	get_strlen(char *s)
{
	size_t	size;

	size = 0;
	while (s && s[size])
		size++;
	return (size);
}

char	*get_strchr(char *s, int c)
{
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == *s)
		return ((char *)s);
	return (NULL);
}

void	*get_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			i;
	size_t			n;

	n = size * nmemb;
	p = malloc(n);
	if (!p)
		return (NULL);
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
