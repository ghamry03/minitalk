/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 00:00:23 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/23 20:54:44 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * take address of void *b and convert it to unsiged char *ch
 * replace every character in the address with int c
 * keep doing it until it reaches size_t len
 */
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*ch;

	i = -1;
	ch = (unsigned char *)b;
	while (++i < len)
	{
		ch[i] = c;
	}
	return (ch);
}
