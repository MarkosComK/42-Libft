/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_width2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:34:29 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/09 10:37:54 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec_width2(long number, int width, char pref, char sign)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number + 1);
	if (pref == '0')
	{
		ft_putchar(sign);
		while (count < width - len)
			count += ft_putchar('0');
		return (count + ft_putnbr(number) + 1);
	}
	while (count < width - len)
		count += ft_putchar(' ');
	ft_putchar(sign);
	return (count + ft_putnbr(number) + 1);
}
