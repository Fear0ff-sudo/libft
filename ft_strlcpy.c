/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:47:20 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 13:35:11 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long size)
{
	unsigned long	i;

	i = 0;
	if (size > 0)
	{
		while (i < size - 1)
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
