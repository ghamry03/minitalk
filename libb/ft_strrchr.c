/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 07:23:37 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/31 19:13:42 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* convert int c into char ch
* search for last ch in *s
* if they match it keeps searching for another match
* it returns pointer to the match
* else it returns NULL
*/
char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	int				tmp;
	char			*ch;

	i = -1;
	tmp = -1;
	ch = (char *)s;
	while (ch[++i])
	{
		if (ch[i] == (unsigned char)c)
			tmp = i;
	}
	if (c == '\0')
		return (ch + i);
	if (tmp != -1)
		return (ch + tmp);
	return (0);
}
