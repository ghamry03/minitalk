/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:34:44 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/22 20:49:41 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * checks if int C is digit (1 to 9)
 */
int	ft_isdigit(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 48 && ch <= 57)
		return (1);
	else
		return (0);
}
