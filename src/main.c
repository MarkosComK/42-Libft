/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/22 13:10:30 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

int	main(void)
{
	char	str[7];
	int		i;

	str = "Markos";
	i = 0;
	ft_bzero(str + 1, 3 * sizeof(char));
	printf("string after ft_bzero(): %s\n", str);
	while (i < 6)
	{
		write(1, &str[i], 1);
		i++;
	}
	return (0);
}
