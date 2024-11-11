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

static long long	handle_overflow(long long result, char c, int sign)
{
	if (result > LLONG_MAX / 10)
	{
		if (sign == 1)
			return (LLONG_MAX);
		return (LLONG_MIN);
	}
	if (result == LLONG_MAX / 10)
	{
		if (sign == 1 && (c - '0') > LLONG_MAX % 10)
			return (LLONG_MAX);
		if (sign == -1 && (c - '0') > -(LLONG_MIN % 10))
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
	while (str[i] && ft_isdigit(str[i]))
	{
		result = handle_overflow(result, str[i], sign);
		if (result == LLONG_MAX || result == LLONG_MIN)
			return (result);
		result = result * 10 + (str[i++] - '0');
	}
	return (result * sign);
}
