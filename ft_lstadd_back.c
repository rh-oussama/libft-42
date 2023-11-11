/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:01:15 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/10 17:08:27 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
}

// #include <stdio.h>

// int main()
// {
//     t_list *list = NULL;
//     t_list *new1 = ft_lstnew("1");
//     t_list *new2 = ft_lstnew("2");

//     ft_lstadd_back(&list, new1);
//     ft_lstadd_back(&list, new2);
//     t_list *current = list;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     return 0;
// }