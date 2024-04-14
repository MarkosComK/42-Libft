/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:28:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/14 21:13:52 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		words_count(char const *str, char c);
int		words_len(char const *str, char c);
char	*ft_strdup(const char *s, int start, int end);
char	**ft_free(char **strs, int count);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_start;
	int		i;
	int		j;

	result = ft_calloc((words_count(s, c) + 1), sizeof(char *));
	if (!result || !s || !c)
		return (NULL);
	i = 0;
	j = 0;
	word_start = 0;
	while (s[i++])
	{
		if (s[i] == c || s[i] == 0)
		{
			result[j++] = ft_strdup(s, word_start, i);
			word_start = i + 1;
			if (!result)
				return (ft_free(result, j));
		}
	}
	result[j] = 0;
	return (result);
}

char	**ft_free(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
	return (NULL);
}

char	*ft_strdup(const char *s, int start, int end)
{
	char	*dup;
	int		i;

	dup = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (start < end)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = 0;
	return (dup);
}

int	words_count(char const *str, char c)
{
	int	count;
	int	x;

	count = 0;
	x = 0;
	while (*str)
	{
		if (*str != c && x == 0)
		{
			count++;
			x = 1;
		}
		else if (*str == c)
		{
			x = 0;
		}
		str++;
	}
	return (count);
}

int	words_len(char const *str, char c)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			len++;
		}
		i++;
	}
	return (len);
}
