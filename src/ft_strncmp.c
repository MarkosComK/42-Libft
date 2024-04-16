/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:59:14 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/16 13:44:54 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	j;

	j = 0;
	while (s1[j] == s2[j] && s1[j] && j < n)
	{
		if (s1[j] != s2[j])
			return ((unsigned int char)s1[j] - (unsigned int char)s2[j]);
		j++;
	}
	if (j < n)
			return ((unsigned int char)s1[j] - (unsigned int char)s2[j]);
	return (0);
}
