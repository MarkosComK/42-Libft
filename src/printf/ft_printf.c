/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:49:01 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/12 17:40:38 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_flags	flags;
	int		i;
	int		count;

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		ft_bzero(&flags, sizeof(t_flags));
		if (str[i] == '%')
		{
			i++;
			while (ft_memchr("-0.# +", str[i], 6) || ft_isdigit(str[i]))
				update_struct(&flags, str, &i);
			count += print_format(&flags, str, &i, args);
		}
		else
			count += ft_putchar(str[i++]);
	}
	va_end(args);
	return (count);
}

int	print_format(t_flags *flags, const char *str, int *pos, va_list args)
{
	int	count;

	count = 0;
	if (str[*pos] == 'c')
		count += putcharf(flags, va_arg(args, int));
	if (str[*pos] == 's')
		count += putstrf(flags, va_arg(args, char *));
	if (str[*pos] == 'p')
		count += print_ptr(flags, va_arg(args, size_t));
	if (str[*pos] == 'd' || str[*pos] == 'i')
		count += print_decimal(flags, va_arg(args, int));
	if (str[*pos] == 'u')
		count += print_decimal(flags, va_arg(args, unsigned int));
	if (str[*pos] == 'x' || str[*pos] == 'X')
		count += print_hexa(flags, va_arg(args, unsigned int), str[*pos]);
	if (str[*pos] == '%')
		count += ft_putchar('%');
	(*pos)++;
	return (count);
}

void	update_struct(t_flags *flags, const char *str, int *pos)
{
	while (str[*pos] == '-' || str[*pos] == '+'
		|| str[*pos] == ' ' || str[*pos] == '#')
	{
		if (str[*pos] == '-')
			flags -> align_left = TRUE;
		if (str[*pos] == '+')
			flags -> plus = TRUE;
		if (str[*pos] == ' ')
			flags -> space = TRUE;
		if (str[*pos] == '#')
			flags -> hash = TRUE;
		(*pos)++;
	}
	if (str[*pos] == '0')
		flags -> zero = TRUE;
	if (ft_isdigit(str[*pos]) || str[*pos] == '.')
	{
		if (str[*pos] == '.')
			flags -> precision = ft_atoi(&str[++*pos]) + 1;
		else
			flags -> width = ft_atoi(&str[*pos]);
		while (ft_isdigit(str[*pos]))
			(*pos)++;
	}
}
