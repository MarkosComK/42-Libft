/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:24:06 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/07 12:54:27 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *ptr)
{
	int	result;

	result = 0;
	while(*ptr == 32)
	{
		ptr++;
	}
	while(*ptr && *ptr >= 48 && *ptr <= 57)
	{
		result = result * 10 + *ptr - 48;
		ptr++;
	}
	return (result);
}
