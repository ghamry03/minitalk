/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 03:51:26 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/28 16:08:09 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* does the same thing as memcpy but handles overflows
* memmove copies from const void *src address to void *dst address
* it does it n times and everytime it changes to the next address (+1)
*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*src_ch;

	if (!dst && !src)
		return (0);
	i = -1;
	src_ch = (unsigned char *)src;
	if (dst > src)
	{
		while (--len + 1 > 0)
		{
			ft_memset(dst + len, src_ch[len], 1);
		}
	}
	else
	{
		while (++i < len)
		{
			ft_memset(dst + i, src_ch[i], 1);
		}
	}
	return (dst);
}
