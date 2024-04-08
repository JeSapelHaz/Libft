/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 13:39:14 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/07 13:39:55 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	verif(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
	{
		if (str[i] == 45)
			j = j * -1;
		i++;
	}
	return (j);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	result = 0;
	sign = verif(str);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] && (str[i] == 43 || str[i] == 45))
		i++;
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		result *= 10;
		result += str[i] - 48;
		i++;
	}
	result *= sign;
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
    char *str = "     ---+--+123-+4ab567";
    printf("%d ", ft_atoi(str));
}*/
