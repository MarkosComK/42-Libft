/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/20 18:20:27 by marsoare         ###   ########.fr       */
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
	
	t_list *n1, *n2, *n3, *n4;
	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = ft_lstnew(NULL);
	n4 = malloc(sizeof(t_list));

	n1->content = "1";
	n2->content = "2";
	n4->content = "5";

	n1->next = n2;
	n2->next = n3;
	n3->next = 0;
	n4->next = 0;

	t_list	*lastcontent = ft_lstlast(n1);
	printf("LAST ITEM IS: %s\n", (char *)lastcontent->content);
	printlist(n1);
	printf("%d\n", ft_lstsize(n1));
	ft_lstadd_front(&n1, n4);
	printlist(n1);
	printf("LAST ITEM IS: %s\n", (char *)lastcontent->content);
	printf("%d", ft_lstsize(n1));
	return (0);
}
