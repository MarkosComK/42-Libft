/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 14:46:18 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/14 21:36:51 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((ptr[i] >= '\t' && ptr[i] <= '\r') || ptr[i] == ' ')
	{
		i++;
	}
	if (ptr[i] == '-' || ptr[i] == '+')
	{
		if (ptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ptr[i] && ptr[i] >= 48 && ptr[i] <= 57)
	{
		result = result * 10 + ptr[i] - 48;
		i++;
	}
	return (result * sign);
}
