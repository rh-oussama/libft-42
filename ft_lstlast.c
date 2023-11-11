/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:52:52 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 17:25:35 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (lst)
	{
		tmp = lst;
		lst = lst->next;
	}
	return (tmp);
}

// #include <stdio.h>

// int main(int argc, char const *argv[])
// {
// 	t_list *head;
// 	t_list *tmp;
// 	t_list *last;

// 	head = malloc(sizeof(t_list) * 1);
// 	tmp = head;
// 	tmp->content = "1";
// 	tmp->next = malloc(sizeof(t_list) * 1);
// 	tmp = tmp->next;
// 	tmp->content = "2";
// 		tmp->next = malloc(sizeof(t_list) * 1);
// 	tmp = tmp->next;
// 	tmp->content = "3";
// 	tmp->next = NULL;

// 	last = ft_lstlast(head);

// 	printf("%s\n", (char *)last->content);

// 	return 0;
// }