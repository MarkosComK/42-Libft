/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:39:50 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 16:03:45 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	c;
	size_t	start_len;

	i = ft_strlen(dst);
	c = 0;
	start_len = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size <= i)
		return (size + ft_strlen(src));
	while (src[c] && i < size - 1)
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = 0;
	return (start_len + ft_strlen(src));
}
