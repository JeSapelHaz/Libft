/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 15:08:23 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/07 15:35:35 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = malloc(sizeof(char) * len + 1);
	if (!new)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[start + i];
		i++;
	}
	return (new);
}

/*
#include <stdio.h>

int	main(void)
{
	char const *s = "salut les amis";
	unsigned char start = 5;
	size_t len = 4;

	printf("%s", ft_substr(s, start, len));
}*/