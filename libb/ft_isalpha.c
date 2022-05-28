/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 21:26:52 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/22 20:49:48 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * checks if int c is an alphabet
 */
int	ft_isalpha(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 65 && ch <= 90)
		return (1);
	else if (ch >= 97 && ch <= 122)
		return (1);
	else
		return (0);
}
