/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 23:00:49 by amanet            #+#    #+#             */
/*   Updated: 2026/11/05 23:10:41 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*res;

	i = 0;
	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (res == NULL)
		return (NULL);
	while (i < ft_strlen(s1))
	{
		res[i] = s1[i];
		i++;
	}
	while (i < ft_strlen(s1) + ft_strlen(s2))
	{
		res[i] = s2[i - ft_strlen(s1)];
		i++;
	}
	res[i] = '\0';
	return (res);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 2)
// 	{
// 		printf("ft : %s", ft_strjoin(argv[1], argv[2]));
// 	}
// 	return (0);
// }
