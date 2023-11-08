/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:50:20 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/06 11:52:45 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	value;

	value = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = value;
		i++;
	}
	return (s);
}
