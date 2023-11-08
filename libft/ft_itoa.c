/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orhaddao <orhaddao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:02:21 by orhaddao          #+#    #+#             */
/*   Updated: 2023/11/07 09:47:30 by orhaddao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		num_digits;
	char	*st;
	int		i;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		i = 1;
	}
	num_digits = count_digits(n);
	st = (char *) malloc(num_digits + i + 1);
	if (!st)
		return (NULL);
	st[i + num_digits] = '\0';
	while (num_digits > 0)
	{
		st[--num_digits + i] = '0' + (n % 10);
		n /= 10;
	}
	if (i == 1)
		st[0] = '-';
	return (st);
}
