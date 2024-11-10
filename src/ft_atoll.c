/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hluiz-ma <hluiz-ma@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:03:34 by hluiz-ma          #+#    #+#             */
/*   Updated: 2024/11/10 19:36:37 by hluiz-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long long	check_overflow(long long result, int digit, int sign)
{
	if (result > LLONG_MAX / 10 || (result == LLONG_MAX / 10
			&& digit > LLONG_MAX % 10))
	{
		if (sign == 1)
			return (LLONG_MAX);
		return (LLONG_MIN);
	}
	return (result);
}

long long	ft_atoll(const char *str)
{
	long long	result;
	int			sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = check_overflow(result, str[i] - '0', sign);
		if (result > LLONG_MAX || result < LLONG_MIN)
			return (result);
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

