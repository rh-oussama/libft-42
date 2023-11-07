/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:09:57 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/06 14:57:37 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		il;
	int		size;
	char	*s;

	size = 0;
	i = 0;
	il = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && is_in_set(s1[i], set) == 1)
		i++;
	while (il > 0 && is_in_set(s1[il - 1], set) == 1)
		il--;
	size = il - i;
	s = (char *) malloc(size + 1);
	if (!s)
		return (NULL);
	size = 0;
	while (i < il)
		s[size++] = s1[i++];
	s[size] = '\0';
	return (s);
}
