/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 13:55:33 by ommohame          #+#    #+#             */
/*   Updated: 2022/02/04 15:47:59 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	hexconvertor(long n, int z)
{
	if (n >= 10)
	{
		if (z == 'x' || z == 'p')
			return ((n) + 87);
		else if (z == 'X')
			return ((n) + 55);
	}
	return ((n) + 48);
}

int	ft_converthex(char *res, unsigned long long int n, int j, int z)
{
	long long int		i;
	long long int		tmp;

	i = 0;
	tmp = 0;
	if (z == 'p')
		ft_putstr_len("0x", 0);
	while (n != 0 || i < j)
	{
		tmp = n % 16;
		res[i] = hexconvertor(tmp, z);
		n /= 16;
		i++;
	}
	return (i - 1);
}

int	ft_putnbrhex_len(long n, int len, int z)
{
	int		count;
	long	i;
	char	*res;

	if (n < 0)
		n = 4294967295 + n + 1;
	i = n;
	count = 1;
	while (i != 0 || (i == 0 && count == 1))
	{
		count++;
		i /= 16;
	}
	res = (char *)malloc(sizeof(char) * (count));
	i = ft_converthex(res, n, count - 1, z);
	res[i + 1] = 0;
	while (i >= 0)
	{
		len = ft_putchar_len(res[i], len);
		i--;
	}
	free (res);
	return (len);
}

int	ft_putadrs_len(void *adrs, int len)
{
	int						count;
	char					*str;
	long long int			i;
	unsigned long long int	tmp;
	unsigned long long int	*ad;

	count = 1;
	ad = (unsigned long long int *)&adrs;
	tmp = *ad;
	while (tmp != 0 || (count == 1 && tmp == 0))
	{
		count++;
		tmp /= 16;
	}
	str = (char *)malloc(sizeof(char) * count);
	i = ft_converthex(str, *ad, count - 1, 'p') + 1;
	str[i] = 0;
	while (--i >= 0)
	{
		len = ft_putchar_len(str[i], len);
	}
	free(str);
	return (len + 2);
}
