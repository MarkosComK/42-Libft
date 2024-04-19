/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 13:14:58 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/19 17:28:41 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *c, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (start > ft_strlen(c))
		return (ft_strdup(""));
	if (len > ft_strlen(c) - start)
		len = ft_strlen(c) - start;
	subs = (char *)malloc(sizeof(char) * len + 1);
	if (subs == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = c[start];
		start++;
		i++;
	}
	subs[i] = 0;
	return (subs);
}
