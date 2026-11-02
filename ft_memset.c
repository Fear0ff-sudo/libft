/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 12:02:52 by amanet            #+#    #+#             */
/*   Updated: 2026/11/02 12:56:30 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, unsigned long n)
{
	unsigned long i;
	i = 0;

	while (i < n)
	{
		((char*)s)[i] = c;
		i++;
	}
	return (s);
}

#include <stdio.h>
#include <string.h>

int	main(int argv, char **argc)
{
	char *str1 = "Hello";
	char *str2 = "Hello";

	if (argv > 1)
	{
		printf("%s\n", str1);
		ft_memset(&str1, argc[1][0], 1);
		printf("%s\n\n", str1);
		printf("%s\n", str2);
		memset(&str2, argc[1][0], 1);
		printf("%s", str2);
	}
	return (0);
}
