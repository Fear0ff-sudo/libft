/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 18:34:47 by amanet            #+#    #+#             */
/*   Updated: 2026/11/04 21:58:35 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!little[i])
		return ((char *)big);
	while (i < len && big[i])
	{
		while (i + j < len && big[i + j] == little[j] && little[j])
		{
			j++;
		}
		if (j == ft_strlen(little))
			return ((char *)(big + (i)));
		j = 0;
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	big[11] = "aaaabc";
// 	char	little[11] = "aabc";
// 	size_t	len = 5;

// 	printf("ft   : %s\n", ft_strnstr(big, little, len));
// 	printf("real : %s\n", strnstr(big, little, len));
// 	return (0);
// }