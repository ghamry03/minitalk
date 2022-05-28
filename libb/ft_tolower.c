/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 06:02:34 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/23 07:23:09 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* if C is upperclase changes it to lowercase
* else it returns C 
*/
int	ft_tolower(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 65 && ch <= 90)
		return (ch + 32);
	else
		return (ch);
}
