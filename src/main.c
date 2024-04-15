/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/15 09:16:34 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>

void capitalize(unsigned int i, char *c)
{
	(void) i;
	*c = ft_toupper(*c);
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	char	result[] = "Hello World";
	ft_striteri(result, capitalize);
	printf("%s\n", result);
	return (0);
}
