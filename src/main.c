/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/09 15:10:46 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <string.h>

int	main(int ac, char *av[])
{
	(void)ac;
	printf("%d\n", atoi(av[1]));
	printf("%d\n", ft_atoi(av[2]));
}
