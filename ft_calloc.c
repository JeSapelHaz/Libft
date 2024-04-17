/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:47:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/17 17:30:28 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
/* va donnner la bonne taille et va tout initialiser a 0 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*m;

	m = malloc(nmemb * size);
	if (!m)
		return (NULL);
	ft_bzero(m, nmemb * size);
	return (m);
}

/*
#include <stdio.h>

int	main(void)
{
	size_t	nmemb;
	size_t	size;

	nmemb = 5;
	size = 3;
	ft_calloc(nmemb, size);
}
*/