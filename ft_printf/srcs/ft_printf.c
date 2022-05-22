/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 02:10:07 by ommohame          #+#    #+#             */
/*   Updated: 2022/02/04 15:54:58 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	flag_check(const char *str, va_list *ap, int len, int i)
{
	if (str[i] == 'c')
		len = ft_putchar_len(va_arg(*ap, int), len);
	else if (str[i] == 's')
		len = ft_putstr_len(va_arg(*ap, char *), len);
	else if (str[i] == 'p')
		len = ft_putadrs_len(va_arg(*ap, void *), len);
	else if (str[i] == 'd' || str[i] == 'i')
		len = ft_putnbr_len(va_arg(*ap, int), len);
	else if (str[i] == 'u')
		len = ft_unputnbr_len(va_arg(*ap, unsigned int), len);
	else if (str[i] == 'x' || str[i] == 'X')
		len = ft_putnbrhex_len(va_arg(*ap, int), len, str[i]);
	else if (str[i] == '%')
		len = ft_putchar_len('%', len);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int			i;
	int			len;
	va_list		ap;

	va_start(ap, str);
	i = -1;
	len = 0;
	while (str[++i])
	{
		if (str[i] == '%')
		{
			i++;
			len = flag_check(str, &ap, len, i);
		}
		else
			len = ft_putchar_len(str[i], len);
	}
	va_end(ap);
	return (len);
}
