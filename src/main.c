/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/20 16:50:12 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void	printlist(t_list *head)
{
	while (head != NULL)
	{
		printf("%s - ", (char *)head->content);
		head = head->next; 
	}
	printf("\n");
}

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	
	t_list *n1, *n2, *n3;
	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = ft_lstnew(NULL);

	n1->content = "1";
	n2->content = "2";

	n1->next = n2;
	n2->next = n3;
	n3->next = 0;

	printlist(n1);
	return (0);
}
