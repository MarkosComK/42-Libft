/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 13:16:14 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/22 13:44:23 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*str;
	char	*d;

	str = (char *)src;
	d = (char *)dest;
	while (n > 0)
	{
		d[n - 1] = str[n - 1];
		n--;
	}
	return (d);
}
