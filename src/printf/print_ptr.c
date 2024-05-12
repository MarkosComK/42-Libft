/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:42:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 17:49:23 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(t_flags *flags, size_t number)
{
	int	string_len;

	string_len = 0;
	if (number == 0)
	{
		string_len = 5;
		if (flags -> width <= 5)
			return (ft_putstr("(nil)"));
		if (flags -> align_left)
		{
			ft_putstr("(nil)");
			while (string_len < flags -> width)
				string_len += ft_putchar(' ');
			return (string_len);
		}
		while (flags -> width > string_len)
			string_len += ft_putchar(' ');
		ft_putstr("(nil)");
		return (string_len);
	}
	if (flags -> width > 0)
		return (print_ptr_spaces(flags -> width, flags -> align_left, number));
	string_len += ft_putstr("0x");
	string_len += print_ptr_hex(number, 'x');
	return (string_len);
}

int	print_ptr_spaces(int width, int align_left, size_t number)
{
	int	string_len;

	string_len = ptr_len(number) + 2;
	if (width <= string_len)
	{
		ft_putstr("0x");
		print_ptr_hex(number, 'x');
		return (string_len);
	}
	if (align_left)
	{
		ft_putstr("0x");
		print_ptr_hex(number, 'x');
		while (width > string_len)
			string_len += ft_putchar(' ');
		return (string_len);
	}
	while (string_len < width)
		string_len += ft_putchar(' ');
	ft_putstr("0x");
	print_ptr_hex(number, 'x');
	return (string_len);
}
