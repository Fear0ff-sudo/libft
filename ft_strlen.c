/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:28:05 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 14:09:18 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
// #include <stdio.h>
// #include <string.h>

// int	main(int argv, char **argc)
// {
// 	if (argv > 1)
// 	{
// 		printf("%lu\n", ft_strlen(argc[1]));
// 		printf("%lu", strlen(argc[1]));
// 	}
// 	return (0);
// }
