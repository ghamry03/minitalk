/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ommohame < ommohame@student.42abudhabi.ae> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 23:27:42 by ommohame          #+#    #+#             */
/*   Updated: 2022/01/12 23:24:09 by ommohame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
* makes a new list
* applies f function on old lst content then saves it in the new list
* uses del function if content is NULL
* returns the new list
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*new;

	if (!lst || !f)
		return (0);
	new = 0;
	while (lst)
	{
		tmp = ft_lstnew(f(lst -> content));
		if (!tmp)
		{		
			ft_lstclear(&new, del);
			return (0);
		}	
		ft_lstadd_back(&new, tmp);
		lst = lst -> next;
	}
	return (new);
}
