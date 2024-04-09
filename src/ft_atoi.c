/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:24:06 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/09 15:10:23 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*ptr >= 9 && *ptr <= 13) || *ptr == 32)
	{
		ptr++;
	}
	while (*ptr && (*ptr == 45 || *ptr == 43))
	{
		if (*ptr == 45)
			sign = -1;
		ptr++;
	}
	while (*ptr && *ptr >= 48 && *ptr <= 57)
	{
		result = result * 10 + *ptr - 48;
		ptr++;
	}
	return (result * sign);
}
