/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:47:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/07 15:35:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_malloc(size_t size)
{
	void		*m;
	size_t		i;

	m = malloc(size);
	if (!m)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(unsigned char *)(m + i) = 0;
		i++;
	}
	return (m);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = ft_malloc(nmemb * size);
	return (m);
}

/*
#include <stdio.h>

int main(void)
{
	size_t nmemb = 5;
	size_t size = 3;
	ft_calloc(nmemb, size);
}
*/