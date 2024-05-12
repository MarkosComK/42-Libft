/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 18:37:42 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 18:38:02 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_dec(size_t number)
{
	int	count;

	count = 0;
	if (number < 10)
	{
		count++;
		ft_putchar(number + 48);
		return (count);
	}
	count += print_unsigned_dec(number / 10);
	count += print_unsigned_dec(number % 10);
	return (count);
}
