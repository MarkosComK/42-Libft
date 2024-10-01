/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_dlim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:56:35 by marsoare          #+#    #+#             */
/*   Updated: 2024/10/01 17:07:15 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_split_dlim(char const *s, char const *delimiters);
static char		**ft_free(char **strs, int count);
static char		*word_get(char const *str, char const *delimiters, int *i);
static int		is_delimiter(char c, char const *delimiters);

char	**ft_split_dlim(char const *s, char const *delimiters)
{
	char	**result;
	int		i;
	int		j;

	i = 0;
	j = 0;
	result = malloc((ft_strlen(s) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (ft_isspace(s[i]))
			i++;
		if (is_delimiter(s[i], delimiters))
		{
			result[j++] = ft_strndup(&s[i], 1);
			i++;
		}
		else if (s[i] != '\0')
		{
			result[j] = word_get(s, delimiters, &i);
			if (!result[j])
				return (ft_free(result, j), NULL);
			j++;
		}
	}
	return (result[j] = NULL, result);
}

static char	**ft_free(char **strs, int count)
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

static char	*word_get(char const *str, char const *delimiters, int *i)
{
	int	start;

	start = *i;
	while (str[*i] && !is_delimiter(str[*i], delimiters)
		&& !ft_isspace(str[*i]))
		(*i)++;
	return (ft_strndup(&str[start], *i - start));
}

static int	is_delimiter(char c, char const *delimiters)
{
	return (ft_strchr(delimiters, c) != NULL);
}
