/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcharf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:34:59 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 20:34:52 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putcharf(t_flags *flags, int c)
{
	int	count;

	count = 0;
	if (flags -> align_left == TRUE)
	{
		count += ft_putchar(c);
		flags -> width -= 1;
		while (flags -> width > 0)
		{
			count += ft_putchar(' ');
			flags -> width -= 1;
		}
		return (count);
	}
	while (flags -> width > 1)
	{
		count += ft_putchar(' ');
		flags -> width -= 1;
	}
	count += ft_putchar(c);
	return (count);
}
