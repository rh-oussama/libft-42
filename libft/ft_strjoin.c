/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:15:38 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/06 10:21:47 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len_s1;
	size_t	len_s2;
	size_t	total_len;

	if (!s1 && !s2)
		return (NULL);
	len_s1 = 0;
	len_s2 = 0;
	if (s1)
		len_s1 = ft_strlen(s1);
	if (s2)
		len_s2 = ft_strlen(s2);
	total_len = len_s1 + len_s2;
	str = (char *)malloc(total_len + 1);
	if (!str)
		return (NULL);
	if (s1)
		ft_strlcpy(str, s1, len_s1 + 1);
	if (s2)
		ft_strlcat(str, s2, total_len + 1);
	return (str);
}
