/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:55 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 18:38:07 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(t_flags *flags, long number)
{
	char	sign;
	char	pref;

	sign = '-';
	pref = ' ';
	if (flags -> space)
		sign = ' ';
	if (flags -> plus)
		sign = '+';
	if (flags -> zero)
		pref = '0';
	if (flags -> align_left)
		return (print_decimal_left(number, flags->width,
				flags->precision - 1, sign));
	if (flags -> width > 0 && flags -> precision > 0)
		return (print_dec_wp(number, flags->width, flags->precision - 1, sign));
	if (flags -> width)
		return (print_dec_width(number, flags->width, pref, sign));
	if (flags -> precision)
		return (print_dec_wp(number, flags->width, flags->precision - 1, sign));
	if (number < 0)
		return (ft_putnbr(number));
	if (sign == '+' || sign == ' ')
		return (ft_putchar(sign) + print_unsigned_dec(number));
	return (print_unsigned_dec(number));
}

int	print_decimal_left(long number, int width, int prec, char sign)
{
	int	count;

	count = 0;
	if (number == 0 && width > 0)
	{
		if (prec != 0)
			count += ft_putchar('0');
		while (count < prec)
			count += ft_putchar('0');
		while (count < width)
			count += ft_putchar(' ');
		return (count);
	}
	count += print_decimal_prec(number, prec, sign);
	while (count < width)
		count += ft_putchar(' ');
	return (count);
}

int	print_decimal_prec(long number, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number);
	if (number == 0 && prec == 0)
		return (0);
	if (number < 0)
		return (print_dec_wz(number, prec + 1));
	if (sign == '+' || sign == ' ')
		count += ft_putchar(sign);
	while (count < prec - len)
		count += ft_putchar('0');
	return (count + print_unsigned_dec(number));
}

int	print_dec_wp(long number, int width, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	if (number < 0)
	{
		len = numlen(number);
		if (prec > len)
			len = prec;
		while (count < width - len - 1)
			count += ft_putchar(' ');
		return (count += print_decimal_prec(number, prec, sign));
	}
	if (sign == '+' || sign == ' ')
		return (print_dec_wp2(number, width, prec, sign));
	len = numlen(number);
	if (number == 0)
		len = 0;
	if (prec > len)
		len = prec;
	while (count < width - len)
		count += ft_putchar(' ');
	return (count + print_decimal_prec(number, prec, sign));
}

int	print_dec_width(long number, int width, char pref, char sign)
{
	int	len;
	int	count;

	count = 0;
	if (number < 0)
	{
		len = numlen(number);
		if (pref == '0')
			return (print_dec_wz(number, width));
		while (count < width - len - 1)
			count += ft_putchar(' ');
		return (count + ft_putnbr(number));
	}
	if (sign == '+')
		return (print_dec_width2(number, width, pref, sign));
	len = numlen(number);
	while (count < width - len)
		count += ft_putchar(pref);
	return (count + print_unsigned_dec(number));
}
