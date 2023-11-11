/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:32:33 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 17:27:36 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
// #include <stdio.h>
// int main()
// {
//     t_list *s;
//     s = ft_lstnew("hello");
//     while (s)
//     {
//         printf("content > %s\n", (char *)s->content);
//         s = s->next;
//     }
//     return 0;
// }