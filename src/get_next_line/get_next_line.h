/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/11 17:07:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/06/09 21:09:22 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "../libft.h"
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*get_read(int fd, char *backup);
char	*get_line(char *backup);
char	*get_strchr(char *s, int c);
void	*get_calloc(size_t nmemb, size_t size);
char	*get_strjoin(char *s1, char *s2);
size_t	get_strlen(char *s);
char	*get_strdup(char *s);
char	*get_rest(char *backup);

#endif
