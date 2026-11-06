/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:15:54 by amanet            #+#    #+#             */
/*   Updated: 2026/11/06 18:48:50 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countsize(int n, int negative)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (n == 0)
		return (0);
	if (n < 10 && negative == 0)
		return (1);
	if (n < 10 && negative == 1)
		return (2);
	while (i / n < 1)
	{
		i = i * 10;
		res++;
	}
		
	if (negative == 0)
		return (res);
	return (res + 1);
}

// char	*ft_itoa(int n)
// {
// 	int		i;
// 	int		negative;
// 	char	*res;

// 	i = 0;
// 	negative = 1;
// 	if (n < 0)
// 	{
// 		negative = -1;
// 		n = n * -1;
// 	}
// 	res = malloc(sizeof(char) * ft_countsize(n, negative) + 1)
// }

#include <stdio.h>

int	main(void)
{
	printf("ft_countsize : %d", ft_countsize(100, 0));

	return (0);
}