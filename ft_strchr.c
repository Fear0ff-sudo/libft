/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:37:26 by amanet            #+#    #+#             */
/*   Updated: 2026/11/04 12:49:39 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	if (s[i] == '\0' && c != '\0')
		return (NULL);
	return ((char *)(s + i));
}

// #include <stdio.h>
// #include <string.h>

// int	main(int argc, char **argv)
// {
// 	char	str[11] = "HelloWorld";

// 	if (argc > 1)
// 	{
// 		printf("ft   : %s\n", ft_strchr(str, argv[1][0]));
// 		printf("real : %s", strchr(str, argv[1][0]));
// 	}
// 	return (0);
// }