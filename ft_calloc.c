/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:39:38 by amanet            #+#    #+#             */
/*   Updated: 2026/11/05 15:08:09 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*res;
	unsigned char	*resp;
	size_t	i;

	i = 0;
	if (nmemb * size > 2147483647)
		return (NULL);
	res = malloc(nmemb * size);
	resp = (unsigned char *)res;
	while (i < size * nmemb)
	{
		resp[i] = '\0';
		i++;
	}
	return (res);
}

#include <stdio.h>

int	main(void)
{
	char	*str;
	char	*str1;
	size_t	nmemb;
	size_t	size;

	nmemb = sizeof(char);
	size = 11;
	str = ft_calloc(nmemb, size);
	str1 = calloc(nmemb, size);
	str = "HelloWorld";
	str1 = "HelloWorld";
	// free(str);
	// free(str1);
	printf("ft   : %s\n", str);
	printf("real : %s", str1);
	return (0);
}
