/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 08:50:44 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/23 11:26:25 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* compare between s1 and s2 lexicographically
* if it reaches n it stops comparing
* else if it reaches null in s1 or s2 it stops
* returns s1 - s2 if there is difference
* else returns NULL
*/
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ch1;
	unsigned char	*ch2;

	ch1 = (unsigned char *)s1;
	ch2 = (unsigned char *)s2;
	i = -1;
	if (n == 0)
		return (0);
	while ((++i < n) && (ch1[i] || ch2[i]))
	{
		if (ch1[i] != ch2[i])
			return (ch1[i] - ch2[i]);
	}
	return (0);
}
