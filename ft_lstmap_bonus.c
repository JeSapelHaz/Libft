/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:29:15 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/17 16:03:23 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* cree une nouvelle liste et renvoie avec chaque element de lst
	applique par la fonction f */
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
		ft_lstadd_back(&new, a);
		lst = lst->next;
	}
	return (new);
}
