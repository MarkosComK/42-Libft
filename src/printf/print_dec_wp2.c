/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_wp2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:04:56 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/04 18:41:24 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec_wp2(long number, int width, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number);
	if (prec > len)
		len = prec;
	while (count < width - len - 1)
		count += ft_putchar(' ');
	return (count + print_decimal_prec(number, prec, sign));
}
