/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:52:33 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 19:24:30 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*destp;
	char	*srcp;

	i = 0;
	destp = (char *)dest;
	srcp = (char *)src;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*src = "Hello";
// 	char	*dest = "World";
// 	char	*src1 = "Hello";
// 	char	*dest1 = "World";

// 	printf("%s\n", (char*)ft_memcpy(&dest, &src, 5));
// 	printf("%s", (char*)memcpy(&dest1, &src1, 5));
// 	return (0);
// }
