/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/07 12:45:33 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
#include <string.h>

int	main(void)
{
	/*
	int	nums[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	memmove(nums, nums + 7, sizeof(int) * 1);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", nums[i]);
	}
	return (0);
	*/
	printf("%d", atoi("  123"));
	printf("%d", ft_atoi("  123"));
}
