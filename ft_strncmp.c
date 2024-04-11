/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 17:06:49 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/11 16:01:08 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	*s1 = "ceci est un test";
	char	*s2 = "ceci est un test";
	unsigned int	n;

	n = 6;
	printf("%d \n",ft_strncmp(s1, s2, 20000));
	char	*s3 = "pqpq";
	char	*s4 = "papq";
	printf("%d ",strncmp(s3, s4, 20000));
}
*/