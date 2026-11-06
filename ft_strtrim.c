/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 12:25:17 by amanet            #+#    #+#             */
/*   Updated: 2026/11/06 12:54:59 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strtrimlen(char const *s1, char const *set)
{
	int	i;
	int	j;
	int	res;

	i = 0;
	j = 0;
	res = 0;
	while (s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				res--;
			j++;
		}
		j = 0;
		i++;
		res++;
	}
	return (res);
}

int	ft_isset(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(sizeof(char) * ft_strtrimlen(s1, set));
	if (res == NULL)
		return (NULL);
	while (s1[i])
	{
		if (ft_isset(s1[i], set) == 0)
		{
			res[j] = s1[i];
			j++;
		}
		i++;
	}
	return (res);
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
