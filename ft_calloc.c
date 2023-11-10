/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:18:31 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/10 10:33:17 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (size && nmemb >= (SIZE_MAX / size))
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr != NULL)
		ft_memset(ptr, 0, total);
	return (ptr);
}

/*
int main(int argc, char const *argv[])
{
	void *x;
	//x = ft_calloc(SIZE_MAX, SIZE_MAX);
	x = calloc(-5, -3);
	printf("%p", x);
	return 0;
}
*/
