/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 22:48:15 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:27:05 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* checks the lst size and returns it
*/
int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst != 0)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}
