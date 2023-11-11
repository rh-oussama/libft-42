/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:57:23 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/10 18:35:13 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void(*del)(void*))
{
	t_list	*new;
	t_list	*start;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	start = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst -> content));
		if (!(new))
		{
			ft_lstclear(&start, del);
			return (NULL);
		}
		ft_lstadd_back(&start, new);
		lst = lst->next;
	}
	return (start);
}
// #include <stdio.h>

// void *fun(void *s)
// {
//     int *num = (int *)s;
//     (*num) += 1;
//     return s;
// }

// void del(void *s)
// {
//     free(s);
// }

// int main()
// {
//     t_list *tmp;
//     t_list *head;
// 	 int *num1 = (int *)malloc(sizeof(int));
//     int *num2 = (int *)malloc(sizeof(int));
//     int *num3 = (int *)malloc(sizeof(int));

//     head = NULL;
//     *num1 = 1;
//     *num2 = 2;
//     *num3 = 3;
//     tmp = ft_lstnew(num1);
//     ft_lstadd_back(&head, tmp);
//     tmp = ft_lstnew(num2);
//     ft_lstadd_back(&head, tmp);
//     tmp = ft_lstnew(num3);
//     ft_lstadd_back(&head, tmp);
//     head = ft_lstmap(head, &fun, &del);
//     while (head)
//     {
//         printf("%d\n", *((int *)head->content));
//         head = head->next;
//     }
//     return 0;
// }