/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:09:57 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 10:35:13 by orhaddao         ###   ########.fr       */
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
	int	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && is_in_set(*s1, set))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && is_in_set(s1[len - 1], set))
		len--;
	return (ft_substr(s1, 0, len));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// 	const char *original = "Wo Wo Hello, World!   Wo ";
// 	const char *set = "Wo";
// 	char *trimmed = ft_strtrim(original, set);
// 	printf("Original: \"%s\"\n", original);
// 	printf("Trimmed: \"%s\"\n", trimmed);
// 	return 0;
// }