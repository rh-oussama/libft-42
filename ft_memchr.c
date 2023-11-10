/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:51:34 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/09 11:13:55 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	value;
	unsigned char	*str;

	str = (unsigned char *)s;
	value = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == value)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}
