/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr_spaces.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 22:01:52 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/09 11:16:46 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
