/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:10:47 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/19 13:37:27 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(little);
	if (!*little)
		return ((char *)big);
	while (*big && len > 0)
	{
		if (!(ft_strncmp(big, little, strlen)) && len >= strlen)
		{
			return ((char *)big);
		}
		big++;
		len--;
	}
	return (NULL);
}
