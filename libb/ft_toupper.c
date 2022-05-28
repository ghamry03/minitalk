/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 06:02:34 by ommohame          #+#    #+#             */
/*   Updated: 2021/12/23 07:23:18 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* If C is lowercase changes it to uppercase
* else it returns C 
*/
int	ft_toupper(int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch >= 97 && ch <= 122)
		return (ch - 32);
	else
		return (ch);
}
