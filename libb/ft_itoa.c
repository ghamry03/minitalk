/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:10:36 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/28 16:30:13 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_len(long num, long *divide)
{
	int	count;

	count = 1;
	while (num / *divide > 0)
	{
		*divide *= 10;
		count++;
	}
	return (count);
}

/*
* changes int n into *str
* return the new str
*/
char	*ft_itoa(int n)
{
	int			i;
	int			neg;
	long		divide;
	long		num;
	char		*str;

	i = 0;
	neg = 0;
	num = (long)n;
	divide = 10;
	if (num < 0)
		num *= (++neg * -1);
	str = (char *)malloc(sizeof(char) * (num_len(num, &divide) + neg + 1));
	if (neg == 1)
		str[i++] = '-';
	divide = 10;
	neg += num_len(num, &divide);
	while (i < neg)
	{
		divide /= 10;
		str[i++] = (num / divide) + 48;
		num %= divide;
	}
	str[i] = 0;
	return (str);
}
