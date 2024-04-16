/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/16 12:21:15 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	//char	s1[] = "Test";
	//char	s2[] = "Test";
	//printf("Lib: %s\n", strchr(NULL, (int)'S'));
	printf("Mine: %s\n", ft_strchr(NULL, (int)'S'));
	//printf("Memory b:%s\nMemory c: %s\n", s3, (char *)ft_memcpy(s4, s3, 5));
	return (0);
}
