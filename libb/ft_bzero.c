/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame <ommohame@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 22:02:51 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/26 19:37:01 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* does the same thing as memset but replace it with NULL
* you can use it as a safety option to hide sensitive data
*/
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
