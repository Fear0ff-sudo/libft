/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:15:54 by amanet            #+#    #+#             */
/*   Updated: 2026/11/09 00:09:50 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countsize(int n)
{
	int	res;

	res = 1;
	if (n == 0)
		return (1);
	while (n >= 10)
	{
		n /= 10;
		res++;
	}
	return (res);
}

int	ft_square(int n, int exponent)
{
	int	i;

	i = 0;
	while (i < exponent)
	{
		n = n * 10;
		i++;
	}
	return (n);
}

char	*ft_assign(int n, int negative, char *res)
{
	int	i;
	int	j;
	int	k;
	int	last;

	i = 0;
	k = 0;
	if (negative == -1)
	{
		res[k] = '-';
		k++;
	}
	last = 0;
	j = ft_square(1, ft_countsize(n) - 1);
	while (i < ft_countsize(n))
	{
		res[k] = ((n / j) - (last * 10)) + 48;
		last = n / j;
		j = j / 10;
		k++;
		i++;
	}
	res[k] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		negative;
	char	*res;

	negative = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		negative = -1;
		n = n * -1;
		res = malloc(sizeof(char) * ft_countsize(n) + 2);
	}
	else
		res = malloc(sizeof(char) * ft_countsize(n) + 1);
	if (res == NULL)
		return (NULL);
	return (ft_assign(n, negative, res));
}
// #include <stdio.h>

// int	main(void)
// {
// 	// printf("ft_countsize : %d", ft_countsize(2567));
// 	// printf("ft_countsize : %d", ft_square(1, 3));
// 	printf("ft_itoa : %s", ft_itoa(-2147483648));

// 	return (0);
// }