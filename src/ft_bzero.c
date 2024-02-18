/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 10:50:30 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/18 11:21:42 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[7] = "Markos";

	ft_bzero(str+1, 3*sizeof(char));
	printf("string after ft_bzero(): %s\n", str);
	int i = 0;
	while (i < 6)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
*/
