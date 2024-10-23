/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 14:23:57 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/13 14:48:56 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*endstr;
	int		totlen;
	int		i;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	totlen = ft_strlen(s1) + ft_strlen(s2);
	endstr = (char *)malloc(sizeof(char) * totlen + 1);
	if (endstr == 0)
		return (NULL);
	i = 0;
	ft_strlcpy(endstr, s1, totlen);
	ft_strlcat(endstr, s2, totlen);
	return (endstr);
}
