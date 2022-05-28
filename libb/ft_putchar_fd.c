/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:52:05 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:41:55 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
* writes only one character
* uses the parameter fd to identify type of write return
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
