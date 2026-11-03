/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:53:20 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 21:19:40 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	i;
	int	res;

	i = 0;
	res = -1;
	while (s[i])
	{
		if (s[i] == c)
			res = i;
		i++;
	}
	if (s[i] == c || res != -1)
		return (s + res);
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	char	str[11] = "HelloWorld";

// 	if (argc > 1)
// 	{
// 		printf("ft  : %s\n", ft_strrchr(str, argv[1][0]));
// 		printf("real: %s", strrchr(str, argv[1][0]));
// 	}
// 	return (0);
// }