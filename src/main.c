/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 14:34:46 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/21 17:44:12 by marsoare         ###   ########.fr       */
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
/*
void	*lstup(void *content)
{
	char	*str;
	char *result;

	str = (char *)content;
	result = ft_strdup(str);
	for (int i = 0; result[i]; i++)
	{
		result[i] = ft_toupper(result[i]);
	}
	return (result);
}
*/
void	lstdel(void *content)
{
	free(content);
}

void	printlst(void *content)
{
	printf("%s", (char *)content);
}

int	main(int ac, char **av)
{
	/*
	auto t_list *n1, *n2, *n3, *n4;

	(void) ac;
	(void) av;
	n1 = malloc(sizeof(t_list));
	n2 = malloc(sizeof(t_list));
	n3 = malloc(sizeof(t_list));
	n4 = malloc(sizeof(t_list));
	n1->content = "hello";
	n2->content = "w";
	n3->content = "o";
	n4->content = 0;
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = 0;

	t_list *new = ft_lstmap(n1, lstup, lstdel);
	ft_lstiter(new, printlst);

	t_list	*lastcontent = ft_lstlast(n1);
	printf("LAST ITEM IS: %s\n", (char *)lastcontent->content);
	printlist(n1);
	printf("%d\n", ft_lstsize(n1));
	ft_lstadd_front(&n1, n4);
	printlist(n1);
	printf("LAST ITEM IS: %s\n", (char *)lastcontent->content);
	printf("%d", ft_lstsize(n1));
	*/
	return (0);
}
