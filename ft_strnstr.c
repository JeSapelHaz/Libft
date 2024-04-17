/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:33:13 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/17 16:06:51 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* cherche little dans big jusqu a len */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	if (little[0] == '\0')
		return ((char *)&big[0]);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			k = i;
			j = 0;
			while (big[k] == little[j] && k < len)
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
#include <string.h>

int	main(void)
{
	char	s1[30] = "aaabcabcd";
	char	s2[10] = "aabc";
	size_t	max; 
	max = strlen(s2);
	printf("%s\n", strnstr(s1, s2, -1));
	printf("%s", ft_strnstr(s1, s2, -1));
}
  */