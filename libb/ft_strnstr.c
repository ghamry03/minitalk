/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 21:28:09 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:56:37 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* locates the first occurrence of the null-terminated string
* where not more than len characters are searched
* characters that appear after a `\0' character are not searched
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	if (!*needle)
		return (hay);
	while (hay[i] && i < len)
	{
		j = 0;
		if (hay[i] == needle[0])
		{
			while (needle[j] == hay[i + j] && needle[j]
				&& (i + j < len))
			{
				j++;
			}
			if (needle[j] == 0)
				return (&hay[i]);
		}
		i++;
	}
	return (NULL);
}
