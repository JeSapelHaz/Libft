/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:24:24 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/12 18:23:48 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hello");
	ft_lstadd_front(&lst, new);

	/* t_list *lst = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_front(&lst, new);	
	 */
	printf("%s",lst->content);
}
