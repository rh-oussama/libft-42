/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:45:23 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 10:04:59 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int main()
// {
// 	t_list	*head;
// 	t_list *tmp;
// 	head = NULL;
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	tmp = ft_lstnew("abcd");
// 	ft_lstadd_back(&head, tmp);
// 	printf("%i\n", ft_lstsize(head));
// 	return 0;
// }