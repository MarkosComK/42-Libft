/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:32:18 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/17 19:28:36 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;

	str = (char *)s;
	while(n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (str);
}
/*
#include <stdio.h>
int	main(void)
{
	char	s[6] = "Markos";

	ft_memset(s+2, '.', 1);
	printf("after my memset(): %s", s);
	return (0);
}
*/
