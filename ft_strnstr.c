/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:33:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/07 13:40:22 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;
	int		k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			k = i;
			j = 0;
			while (big[k] == little[j])
			{
				if (little[j + 1] == '\0')
					return ((char *)&big[i]);
				k++;
				j++;
			}
		}
		i++;
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*big;
	char	*little;

	big = "salut mo mon super pote";
	little = "mon";
	printf("%s ", ft_strnstr(big, little, 10));
}
*/