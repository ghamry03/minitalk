/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:12:18 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:37:13 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* searches for the first occurrence of the character c
* n the first n bytes of the string pointed to
* This function returns a pointer to the matching byte 
* or NULL if the character does not occur
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int			i;
	unsigned char			*ch;

	ch = (unsigned char *)s;
	i = -1;
	while (++i < n)
	{
		if (ch[i] == (unsigned char)c)
			return (ch + i);
	}
	return (0);
}
