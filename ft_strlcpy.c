/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:47:20 by amanet            #+#    #+#             */
/*   Updated: 2026/11/12 00:56:06 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// #include <stdio.h>
// #include <bsd/string.h>

// int	main(void)
// {
// 	char	src[6] = "Hello";
// 	char	dest[6] = "World";
// 	char	dest1[6] = "World";

// 	printf("%ld ", ft_strlcpy(dest, src, 6));
// 	printf("%s\n", dest);
// 	printf("%ld ", strlcpy(dest1, src, 6));
// 	printf("%s\n", dest1);

// 	return (0);
// }
