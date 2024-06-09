/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:07:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/06/09 19:45:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_read(int fd, char *backup);
char	*get_line(char *backup);
static char	*ft_strchr(char *s, int c);
static void	*ft_calloc(size_t nmemb, size_t size);
static char	*ft_strjoin(char *s1, char *s2);
static size_t	ft_strlen(char *s);
static char	*ft_strdup(char *s);
char	*get_rest(char *backup);

#endif
