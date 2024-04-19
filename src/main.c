/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/19 13:43:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int	main(int ac, char **av)
{
	char	**str;
	int		i;

	(void) ac;
	(void) av;
	str = ft_split("me  !       ", ' ');
	i = 0;
	while (str[i])
	{
		printf("ARR: %s \n", str[i]);
		i++;
	}
	return (0);
}
