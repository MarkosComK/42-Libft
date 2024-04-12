/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 14:38:23 by marsoare         ###   ########.fr       */
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
	char	s1[10];
	char	*s2;
	char	s3[10];
	char	*s4;

	s2 = "MarkossokraM";
	s4 = "MarkossokraM";
	printf("%ld\n", strlcpy(s1, s2, 10));
	printf("%s\n", s1);
	printf("%ld\n", ft_strlcpy(s3, s4, 10));
	printf("%s\n", s3);
	return (0);
}
