/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:40:38 by amanet            #+#    #+#             */
/*   Updated: 2026/11/12 01:26:46 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sizedst;
	size_t	sizesrc;

	sizesrc = ft_strlen(src);
	if (!dst && size == 0)
		return (sizesrc);
	sizedst = ft_strlen(dst);
	if (size <= sizedst)
		return (size + sizesrc);
	i = ft_strlen(dst);
	j = 0;
	if (size > sizedst)
	{
		while (src[j] && i < size - 1)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (sizedst + sizesrc);
}
// #include <stdio.h>
// #include <bsd/string.h>
// int	main(void)
// {
// 	char	src[6] = "Hello";
// 	char	dest[11] = "World";
// 	char	dest1[11] = "World";

// 	printf("%ld ", ft_strlcat(dest, src, 11));
// 	printf("%s\n", dest);
// 	printf("%ld ", strlcat(dest1, src, 11));
// 	printf("%s\n", dest1);
// 	return (0);
// }
