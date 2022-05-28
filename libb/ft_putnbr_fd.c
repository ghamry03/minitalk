/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:18:36 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:43:56 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* prints out every digit in n
*/
void	ft_putnbr_fd(int n, int fd)
{
	long	i;
	char	tmp;

	i = 10;
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	while (n >= i)
		i *= 10;
	while (i > 1)
	{
		i /= 10;
		tmp = (n / i) + 48;
		ft_putchar_fd(tmp, fd);
		n %= i;
	}
}
