/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/13 12:57:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <bsd/string.h>
#include <ctype.h>

int	main(int ac, char *av[])
{
	(void) ac;
	(void) av;

	int	i = 0;
	int	n = 4;
	int	*a;

	a = (int *)calloc(n ,sizeof(int));
	while(i < 4)
	{
		a[i] = 1;
		printf("%d ", a[i]);
		i++;
	}
	printf("now the result with ft_calloc: ");
	i = 0;
	a = (int *)ft_calloc(n, sizeof(int));
	while(i < 4)
	{
		a[i] = 2;
		printf("\n%d ", a[i]);
		i++;
	}
	return (0);
}
