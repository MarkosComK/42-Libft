/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:49:43 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/14 21:12:03 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*result;

	i = 0;
	j = 0;
	k = 0;
	while (ft_strchr(set, (int)s1[i]))
		i++;
	while (s1[i + j])
		j++;
	while (ft_strrchr(set, (int)s1[j]))
		j--;
	result = (char *)malloc(sizeof(char) * (j + 1));
	if (!result || !s1 || !set)
		return (NULL);
	while (j > 0)
	{
		result[k++] = s1[i++];
		j--;
	}
	result[k] = 0;
	return (result);
}
