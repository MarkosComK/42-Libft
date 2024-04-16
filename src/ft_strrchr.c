/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:04 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/16 13:19:30 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*p;

	p = NULL;
	len = (int)ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			p = (char *)&s[len];
			return (p);
		}
		len--;
	}
	return (p);
}
