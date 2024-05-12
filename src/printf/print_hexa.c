/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:12:50 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 18:25:46 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa(t_flags *flags, long number, char x)
{
	char	pref;
	int		len;

	pref = ' ';
	if (flags -> zero)
		pref = '0';
	if (flags -> width && flags -> precision)
		pref = ' ';
	if (flags -> align_left)
		return (print_hexa_left(flags, number, x));
	if (flags -> hash)
		return (print_hexa_hash(flags, number, x, pref));
	if (flags -> width)
		return (print_hexa_width(flags, number, x, pref));
	if (flags -> precision)
		return (print_hexa_prec(flags -> precision - 1, number, x));
	len = ptr_len(number);
	print_ptr_hex(number, x);
	return (len);
}

int	print_hexa_left(t_flags *flags, long number, char x)
{
	int	count;

	count = 0;
	if (flags -> hash)
	{
		if (number != 0)
			count += ft_putchar('0') + ft_putchar(x);
	}
	count += print_hexa_prec(flags -> precision - 1, number, x);
	while (count < flags -> width)
		count += ft_putchar(' ');
	return (count);
}

int	print_hexa_hash(t_flags *flags, long number, char x, char pref)
{
	int	count;
	int	len;

	count = 0;
	len = ptr_len(number);
	if (flags -> precision - 1 - len)
		len = flags -> precision - 1;
	if (pref == 0)
	{
		if (number != 0)
			count += ft_putchar('0') + ft_putchar(x);
		while (count < flags -> width - len)
			count += ft_putchar(pref);
		count += print_hexa_prec(flags -> precision - 1, number, x);
		return (count);
	}
	while (count < flags -> width - 2 - len)
		count += ft_putchar(pref);
	if (number != 0)
		count += ft_putchar('0') + ft_putchar(x);
	count += print_hexa_prec(flags -> precision - 1, number, x);
	return (count);
}

int	print_hexa_width(t_flags *flags, long number, char x, char pref)
{
	int	count;
	int	len;

	count = 0;
	len = ptr_len(number);
	if (flags -> precision - 1 > len)
		len = flags -> precision - 1;
	if (number == 0 && flags -> precision == 1)
		len = 0;
	while (count < flags -> width - len)
		count += ft_putchar(pref);
	count += print_hexa_prec(flags -> precision - 1, number, x);
	return (count);
}

int	print_hexa_prec(int prec, long number, char x)
{
	int	count;

	if (number == 0 && prec == 0)
		return (0);
	count = ptr_len(number);
	while (count < prec)
		count += ft_putchar('0');
	print_ptr_hex(number, x);
	return (count);
}
