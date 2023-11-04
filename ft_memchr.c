/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:51:34 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/03 18:03:17 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	value;

	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == value)
			return ((void *)&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
