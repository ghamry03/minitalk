/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 14:58:53 by ommohame          #+#    #+#             */
/*   Updated: 2022/02/03 16:51:17 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar_len(char c, int len);

int	ft_putstr_len(char *str, int len);

int	ft_putnbr_len(int n, int len);

int	ft_unputnbr_len(unsigned int n, int len);

int	hexconvertor(long n, int z);

int	ft_converthex(char *res, unsigned long long int n, int j, int z);

int	ft_putnbrhex_len(long num, int len, int z);

int	ft_putadrs_len(void *adrs, int len);

int	flag_check(const char *str, va_list *ap, int len, int i);

int	ft_printf(const char *str, ...);

#endif