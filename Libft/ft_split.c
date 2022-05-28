/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 00:21:39 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:48:09 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* counts how many words do I have to use it for malloc
*/
static int	word_count(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[i])
	{
		if ((s[i] == c && s[i]) || s[i + 1] == 0)
		{
			count++;
			while (s[i] == c && s[i + 1] == c)
				i++;
		}
		i++;
	}
	return (count);
}

/*
* checks out my word len to use it for malloc
*/
static int	word_len(char const *s, char c, int i)
{
	while (s[i])
	{
		if (s[i] == c && s[i])
			return (i);
		i++;
	}
	return (i);
}

/*
* split but norminette friendly
*/
static char	**splitbutnotsplit(char **str, char const *s, char c, int i)
{
	int	x;

	x = 0;
	while (x < word_count(s, c) && s[i])
	{
		if (s[i] == c || i == 0)
		{
			while (s[i] == c && s[i])
				i++;
			str[x] = (char *)malloc(sizeof(char) * (word_len(s, c, i) - i + 1));
			if (!str[x])
				return (NULL);
			ft_strlcpy(str[x], s + i, (word_len(s, c, i) - i + 1));
			i = word_len(s, c, i) - 1;
			x++;
		}
		i++;
	}
	str[x] = NULL;
	return (str);
}

/*
* split char s into words
* splits them every time it finds char c
* copies every word into the new string
* returns double pointer string
*/
char	**ft_split(char const *s, char c)
{
	int		i;
	char	**str;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!str)
		return (NULL);
	i = 0;
	splitbutnotsplit(str, s, c, i);
	return (str);
}
