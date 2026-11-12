/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:25:17 by amanet            #+#    #+#             */
/*   Updated: 2026/11/12 20:40:54 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	size;
	int	i;

	start = 0;
	i = 0;
	while (ft_isset(s1[i], set))
	{
		start++;
		i++;
	}
	size = ft_strlen(s1) - start;
	while (s1[i])
		i++;
	i--;
	while (ft_isset(s1[i], set))
	{
		size--;
		i--;
	}
	return (ft_substr(s1, start, size));
}
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 2)
// 	{
// 		printf("ft : %s", ft_strtrim(argv[1], argv[2]));
// 	}
// 	return (0);
// }
