/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:29:15 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/16 14:52:12 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*a;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		a = ft_lstnew(f(lst->content));
		if (!a)
		{
			del(f(lst->content));
			ft_lstclear(&new, (*del));
			return (new);
		}
		ft_lstadd_back(&new, a);
		lst = lst->next;
	}
	return (new);
}
