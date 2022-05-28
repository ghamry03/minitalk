/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 03:51:26 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/28 16:07:41 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* memcpy copies from const void *src address to void *dst address
* it does it n times and everytime it changes to the next address (+1)
* it doesn't check for overflow or null
* ft_memmove handles overlappping
*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ch;

	if (!src && !dst)
		return (0);
	i = -1;
	ch = (unsigned char *)src;
	while (++i < n)
	{
		ft_memset(dst + i, ch[i], 1);
	}
	return (dst);
}
