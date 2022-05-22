/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchars.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:52:05 by ommohame          #+#    #+#             */
/*   Updated: 2022/02/04 15:57:17 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putchar_len(char c, int len)
{
	write(1, &c, 1);
	len++;
	return (len);
}

int	ft_putstr_len(char *str, int len)
{
	if (!str)
		str = "(null)";
	while (*str)
	{
		len = ft_putchar_len(*str, len);
		str++;
	}
	return (len);
}
