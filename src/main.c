/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/13 14:39:14 by marsoare         ###   ########.fr       */
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

	const char	*s1 = "This is an big string example";
	const char	*s2 = " and this is the second str";
	char		*s3;

	s3 = (char *)ft_strjoin(s1, s2);
	printf("%s", s3);
}
