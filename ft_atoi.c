/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 12:21:38 by amanet            #+#    #+#             */
/*   Updated: 2026/11/05 14:36:57 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	res;

	i = 0;
	if (nptr[0] == '-')
		i++;
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = (res * 10) + nptr[i] - 48;
		i++;
	}
	if (nptr[0] != '-')
		return (res);
	return (res * -1);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		printf("ft   : %d\n", ft_atoi(argv[1]));
// 		printf("real : %d", atoi(argv[1]));
// 	}
// 	return (0);
// }
