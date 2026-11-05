/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 22:49:00 by amanet            #+#    #+#             */
/*   Updated: 2026/11/05 23:00:26 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = start;
	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	while (i < len + start)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		printf("ft : %s", ft_substr(argv[1], 5, 5));
// 	}
// 	return (0);
// }
