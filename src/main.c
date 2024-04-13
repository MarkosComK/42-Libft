/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/13 14:22:08 by marsoare         ###   ########.fr       */
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

	const char	*c = "This is an big string example";
	char	*subs;

	subs = ft_substr(c, 5, 5);
	printf("%s", subs);
}
