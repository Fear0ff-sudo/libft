/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 13:09:05 by amanet            #+#    #+#             */
/*   Updated: 2026/11/04 18:03:41 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1p;
	unsigned char	*s2p;

	i = 0;
	s1p = (unsigned char *)s1;
	s2p = (unsigned char *)s2;
	while (i < n)
	{
		if (s1p[i] != s2p[i])
			return (s1p[i] - s2p[i]);
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[6] = "Horld";
// 	char	s2[6] = "Horld";
// 	size_t	n = 6;

// 	printf("ft   : %d\n", ft_memcmp(s1, s2, n));
// 	printf("real : %d", memcmp(s1, s2, n));
// 	return (0);
// }