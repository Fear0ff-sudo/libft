/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:02:52 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 19:24:46 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*sp;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		sp[i] = c;
		i++;
	}
	return (s);
}
// #include <stdio.h>
// #include <string.h>

// int	main(int argv, char **argc)
// {
// 	char *str1 = "Hello";
// 	char *str2 = "Hello";

// 	if (argv > 1)
// 	{
// 		printf("%s\n", str1);
// 		printf("%s\n\n", (char*)ft_memset(&str1, argc[1][0], 5));
// 		printf("%s\n", str2);
// 		printf("%s\n", (char*)memset(&str2, argc[1][0], 5));
// 	}
// 	return (0);
// }
