/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:54:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/02/21 13:54:40 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

 int     main(void)
 {
         char    str[7] = "Markos";
 
         ft_bzero(str+1, 3*sizeof(char));
         printf("string after ft_bzero(): %s\n", str);
         int i = 0;
         while (i < 6)
         {
                 write(1, &str[i], 1);
                 i++;
         }
         return (0);
 }

