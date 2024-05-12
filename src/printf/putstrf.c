/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstrf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:44:44 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 17:46:58 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstrf(t_flags *flags, char *str)
{
	if (flags -> width > 0 && flags -> precision)
		return (putboth(flags->width,
				flags->precision - 1, str, flags->align_left));
	if (flags -> width > 0)
		return (putstr_width(flags -> width, str, flags -> align_left));
	if (flags -> precision > 0)
		return (putstr_precision(flags -> precision - 1, str));
	return (ft_putstr(str));
}

int	putboth(int width, int precision, char *str, int align_left)
{
	int	string_len;
	int	count;

	count = 0;
	if (str == NULL)
	{
		str = "(null)";
		if (precision < 6)
			precision = 0;
	}
	string_len = (int)ft_strlen(str);
	if (precision < string_len)
		string_len = precision;
	if (string_len >= width)
		return (putstr_precision(precision, str));
	if (align_left)
	{
		count += putstr_precision(precision, str);
		while (count < width)
			count += ft_putchar(' ');
		return (count);
	}
	while (count < width - string_len)
		count += ft_putchar(' ');
	return (count + putstr_precision(precision, str));
}

int	putstr_width(int width, char *str, int align_left)
{
	int		string_len;
	int		printed_len;

	if (str == NULL)
		str = "(null)";
	string_len = (int)ft_strlen(str);
	printed_len = 0;
	if (string_len >= width)
		return (ft_putstr(str));
	if (align_left == TRUE)
	{
		printed_len += ft_putstr(str);
		while (printed_len < width)
			printed_len += ft_putchar(' ');
		return (printed_len);
	}
	while (printed_len < width - string_len)
		printed_len += ft_putchar(' ');
	printed_len += ft_putstr(str);
	return (printed_len);
}

int	putstr_precision(int precision, char *str)
{
	int	total_printed;

	total_printed = 0;
	if (str == NULL)
	{
		str = "(null)";
		if (precision < 6)
			precision = 0;
	}
	while (str[total_printed] && total_printed < precision)
		total_printed += ft_putchar(str[total_printed]);
	return (total_printed);
}
