/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_wz.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 14:07:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/04 21:02:20 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec_wz(long number, int prec)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number);
	if (number < 0)
	{
		count += ft_putchar('-');
		number = -number;
	}
	while (count < prec - len)
		count += ft_putchar('0');
	count += print_unsigned_dec(number);
	return (count);
}
