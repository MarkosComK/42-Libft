/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/16 11:58:44 by marsoare         ###   ########.fr       */
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
	char	s1[] = "Test";
	char	s2[] = "Test";
	printf("Lib: %s\n", (char *)memmove(s1, s1+1, 4));
	printf("Mine: %s\n", (char *)ft_memmove(s2, s2+1, 4));
	//printf("Memory b:%s\nMemory c: %s\n", s3, (char *)ft_memcpy(s4, s3, 5));
	return (0);
}
