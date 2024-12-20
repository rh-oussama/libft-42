/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:06:59 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/11 09:56:51 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *) malloc((ft_strlen(s) * sizeof(char)) + 1);
	if (str == 0)
		return (0);
	while (s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main() {
//     const char *s = "";
//     char *my = ft_strdup(s);
//     char *original = strdup(s);
//     printf("using ft_strdup: %s\n", my);
//     printf("using strdup: %s\n",  original);
//     return 0;
// }