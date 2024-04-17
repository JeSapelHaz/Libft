/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:28:49 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/17 16:00:26 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* applique la fonction f a chaque caractere */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
