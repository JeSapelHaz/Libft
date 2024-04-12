/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:21:52 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/12 16:03:50 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			nb++;
		while (s[i] != c && s[i])
			i++;
	}
	return (nb);
}

static int	len_word(char const *s, char c, int i)
{
	int	nb;

	nb = 0;
	while (s[i] != c && s[i])
	{
		nb++;
		i++;
	}
	return (nb);
}

static char	*put_str(char const *s, char c, int i)
{
	int		j;
	int		len;
	char	*str;

	j = 0;
	len = len_word(s, c, i);
	str = malloc(sizeof(char) * len + 1);
	while (j < len)
	{
		str[j] = s[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	split = malloc(sizeof(char *) * count_words(s, c) + 1);
	if (!split)
		return (0);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
		{
			split[j] = put_str(s, c, i);
			i++;
			j++;
		}
		while (s[i] != c && s[i])
			i++;
	}
	split[j] = 0;
	return (split);
}

/* #include <stdio.h>

int	main(void)
{
	char *str = "kkkk ca kkkkkk va kkkkk  
	wjhqbdkw kcjnckejbcmxmnmzjbfelfjnmmnkkk";
	char c = 'k';
	char **split = ft_split(str, c);
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
} */