/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 20:10:47 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 22:17:13 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*p;

	p = NULL;
	if (*little == 0)
		return ((char *)big);
	while (*big && len > 0)
	{
		if(!(ft_strncmp(big, little, ft_strlen(little))))
		{
			p = (char *)big;
			return (p);
		}
		big++;
		len--;
	}
	return (NULL);
}
