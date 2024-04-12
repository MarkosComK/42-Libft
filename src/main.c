/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/12 15:54:04 by marsoare         ###   ########.fr       */
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
	char	s1[13] =  "Markos";
	char	s2[7] = "sokraM";
	char	s3[13] = "Markos";
	char	s4[7] = "sokraM";

	printf("%ld\n", strlcat(s1, s2, 5));
	printf("%s\n", s1);
	printf("%ld\n", ft_strlcat(s3, s4, 5));
	printf("%s\n", s3);
	return (0);
}
