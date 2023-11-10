/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:11:37 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/08 19:29:18 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	if (dst == NULL && size == 0)
		return (ft_strlen(src));
	i = 0;
	dl = ft_strlen(dst);
	sl = ft_strlen(src);
	if (size <= dl)
		return (sl + size);
	while (src[i] && (dl + i) < (size - 1))
	{
		dst[dl + i] = src[i];
		i++;
	}
	dst[dl + i] = '\0';
	return (dl + sl);
}
