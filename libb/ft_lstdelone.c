/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 18:53:58 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:18:22 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* Takes as a parameter an element and frees it
* delete the content using the function’del’ given as a parameter
* next is not freed
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst && !del)
		return ;
	del (lst -> content);
	free (lst);
}
