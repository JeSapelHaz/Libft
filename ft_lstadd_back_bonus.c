/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:26:19 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/13 14:07:20 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *t;
	
	t = *lst;
	while(t->next)
		t = t->next;
	t->next = new;
}

/* #include <stdio.h>
int main(void)
{
	t_list *lst = ft_lstnew("Hello");
	ft_lstadd_front(&lst, ft_lstnew("World"));
	ft_lstadd_front(&lst, ft_lstnew("Salut"));
	ft_lstadd_back(&lst, ft_lstnew("dernier"));
	printf("%s", ft_lstlast(lst)->content);
} */
