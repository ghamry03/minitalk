/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 09:29:05 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:38:46 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* compares the first n bytes of memory 
* area str1 and memory area str2
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_ch;
	unsigned char	*s2_ch;

	i = -1;
	s1_ch = (unsigned char *)s1;
	s2_ch = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (++i < n)
	{
		if (s1_ch[i] != s2_ch[i])
			return (s1_ch[i] - s2_ch[i]);
	}
	return (0);
}
