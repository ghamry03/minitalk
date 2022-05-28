/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 03:18:55 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/22 20:49:38 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * checks if int C is printable ascii (32 to 126)
 */
int	ft_isprint(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 32 && ch <= 126)
		return (1);
	else
		return (0);
}
