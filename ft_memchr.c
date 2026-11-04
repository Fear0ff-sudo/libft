/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:28:22 by amanet            #+#    #+#             */
/*   Updated: 2026/11/04 22:06:30 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*sp;
	unsigned char	cp;

	i = 0;
	sp = (unsigned char *)s;
	cp = (unsigned char)c;
	while (i < n && sp[i] != cp)
		i++;
	if (i == n)
		return (NULL);
	return ((void *)(s + i));
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[6] = "Hello";
// 	int		c = 'l';

// 	printf("ft   : %s\n", (char *)ft_memchr(&s, c, 6)); 
// 	printf("real : %s", (char *)memchr(&s, c, 6));
// printf needs text before, else it goes kaboom and seg fault
// 	return (0);
// }