/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbutt <hbutt@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:13:29 by hbutt             #+#    #+#             */
/*   Updated: 2024/04/08 14:23:07 by hbutt            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[start]))
	{
		start++;
	}
	if (end < start)
		return (ft_strdup(s1 + end + 1));
	while (ft_strrchr(set, s1[end]))
	{
		end--;
	}
	str = malloc(end - start + 2);
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[start], end - start + 2);
	return (str);
}


#include <stdio.h>

int	main(void)
{
	char const s1[20] = "ton va tester not";
	char const set[2] = "t";
	printf("%s", ft_strtrim(s1, set));
}