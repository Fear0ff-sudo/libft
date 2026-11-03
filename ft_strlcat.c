/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:40:38 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 14:25:35 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	sizedst;

	i = ft_strlen(src) + 1;
	sizedst = ft_strlen(dst);
	j = 0;
	if (size > 0)
	{
		while (j < size)
		{
			dst[i] = src[j];
			i++;
			j++;
		}
		dst[i] = '\0';
	}
	return (sizedst + ft_strlen(src));
}
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	src[6] = "Hello";
	char	dest[12] = "World";
	char	dest1[12] = "World";

	printf("%ld ", ft_strlcat(dest, src, 6));
	printf("%s\n", dest);
	printf("%s\n", dest + 6);
	printf("%ld ", strlcat(dest1, src, 6));
	printf("%s\n", dest1);
	printf("%s\n", dest1 + 6);

	return (0);
}
