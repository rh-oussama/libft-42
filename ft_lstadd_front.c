/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:41:16 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 17:24:08 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main()
// {
//     t_list *list = NULL;
//     t_list *new1 = ft_lstnew("1");
//     t_list *new2 = ft_lstnew("2");
//     ft_lstadd_front(&list, new1);
//     ft_lstadd_front(&list, new2);
//     while (list)
//     {
//         printf("%s\n", (char *)list->content);
//         list = list->next;
//     }
//     return 0;
// }