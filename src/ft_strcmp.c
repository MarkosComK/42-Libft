/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 18:21:51 by marsoare          #+#    #+#             */
/*   Updated: 2024/10/01 16:38:32 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strcmp - Compares two strings 's1' and 's2'.
 *
 * This function compares the characters of 's1' and 's2' lexicographically.
 * It returns the difference between the first differing characters or 0 if 
 * the strings are identical. For example:
 *
 * ft_strcmp("hello", "hell")
 * // Result: Non-zero value, because 'o' differs from the null terminator
 * in "hell".
 *
 * It's like a side-by-side comparison of two strings, where the first 
 * mismatch determines the result.
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 || !s2)
		return (-1);
	while (s1[i] && s2[i] && s1[i] == s2[i])
		++i;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
