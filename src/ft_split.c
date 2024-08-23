/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:28:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/25 23:49:59 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*word_get(char const *str, char c, int *i, int *in_quotes);
static char		**ft_free(char **strs, int count);
static char		*ft_strdupword(char const *str, int len);

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		j;
	int		iq;

	result = NULL;
	i = 0;
	j = 0;
	iq = 0;
	result = ft_calloc((ft_count_words(s, c) + 1), sizeof(char *));
	if (!result || !s)
		return (NULL);
	while (s[i] && j < ft_count_words(s, c))
	{
		if ((s[i] == c && !iq) || (s[i] == '\'' && s[i + 1] == '\''))
			i++;
		else
		{
			result[j] = word_get(s, c, &i, &iq);
			if (!result)
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

static char	*word_get(char const *str, char c, int *i, int *in_quotes)
{
	int	start;
	int	len;

	start = *i;
	len = 0;
	while (str[*i])
	{
		if (str[*i] == '\'' && !(*in_quotes))
		{
			*in_quotes = 1;
			if ((*i)++ | len++)
				continue ;
		}
		if (str[*i] == '\'' && *in_quotes)
		{
			*in_quotes = 0;
			if ((*i)++ | len++)
				continue ;
		}
		if (str[*i] == c && !(*in_quotes))
			break ;
		(*i)++;
		len++;
	}
	return (ft_strdupword(&str[start], len));
}

static char	*ft_strdupword(char const *str, int len)
{
	char	*dup;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dup = malloc((len + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	while (i < len && str[i])
	{
		if (str[i] == '\'')
			i++;
		dup[j++] = str[i++];
	}
	dup[j] = '\0';
	return (dup);
}
