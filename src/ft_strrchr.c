/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:04 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/19 17:19:19 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strrchr - Finds the last occurrence of a character 'c' in the string 's'.
 *
 * This function searches the string 's' from the end towards the beginning,
 * returning a pointer to the last occurrence of the character 'c'. If 'c' 
 * is not found, it returns NULL. For example:
 * 
 *     ft_strrchr("searching through code", 'c')
 *     // Result: Pointer to the 'c' in "code"
 * 
 * Think of it like scanning through a text, but you're focusing on the very
 * last appearance of your target character.
 */
char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = (int)ft_strlen(s);
	if (!((unsigned char)c))
		return ((char *)&s[i]);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
