/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:10:47 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/14 22:38:54 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	strlen;

	strlen = ft_strlen(little);
	if ((!*little && !*big) || !*little)
		return ((char *)big);
	if (strlen > len)
		return (NULL);
	while (big && len > 0)
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
