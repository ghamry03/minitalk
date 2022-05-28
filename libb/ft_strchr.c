/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 07:31:34 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/29 05:19:58 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* convert int c into char ch
* search for ch in *s
* if they match it returns pointer to the match
* else it returns NULL
*/
char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			*ch;

	ch = (char *)s;
	i = -1;
	while (++i < ft_strlen(ch) + 1)
	{
		if (ch[i] == (unsigned char)c)
			return (ch + i);
	}
	return (0);
}
