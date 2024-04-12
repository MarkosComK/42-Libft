/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:04 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 16:55:57 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*p;

	p = NULL;
	len = ft_strlen(s);
	if (*s == 0)
		return (NULL);
	while (len > 0)
	{
		if (s[len] == (char)c)
		{
			p = (char *)&s[len];
			return (p);
		}
		len--;
	}
	return (NULL);
}
