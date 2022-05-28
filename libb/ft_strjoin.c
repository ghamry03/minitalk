/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 01:18:18 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/28 16:13:58 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* joins s1 and s2 together in a new string
* returns the result
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*str;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	i = -1;
	j = -1;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	while (s1[++i])
	{
		str[i] = s1[i];
	}
	while (s2[++j])
	{
		str[i++] = s2[j];
	}
	str[i] = 0;
	return (str);
}
