/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 23:40:31 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/25 23:43:07 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, const char delim)
{
	int	count;
	int	x;
	int	i;

	count = 0;
	x = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != delim && !x && (i == 0 || str[i - 1] == delim))
			count++;
		if (str[i] == '\'')
			x = !x;
		i++;
	}
	return (count);
}
