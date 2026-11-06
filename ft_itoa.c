/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 18:15:54 by amanet            #+#    #+#             */
/*   Updated: 2026/11/06 23:26:15 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

int	ft_countsize(int n)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (n == 0)
		return (0);
	while (n / i >= 10)
	{
		i = i * 10;
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
		res[k] = ((n / j) - last) + 48;
		last = n / j;
		printf("i      : %d\n", i);
		printf("res[k] : %c\n", res[k]);
		printf("calc   : %c\n", ((n / j) - last));
		j = j / 10;
		k++;
		i++;
	}
	res[i] = '\0';
	return (res);
}

char	*ft_itoa(int n)
{
	int		negative;
	char	*res;

	negative = 1;
	if (n < 0)
	{
		negative = -1;
		n = n * -1;
		res = malloc(sizeof(char) * ft_countsize(n) + 2);
		//res[0] = '-';
	}
	else
		res = malloc(sizeof(char) * ft_countsize(n) + 1);
	if (res == NULL)
		return (NULL);
	return (ft_assign(n, negative, res));
}



int	main(void)
{
	// printf("ft_countsize : %d", ft_countsize(2567));
	// printf("ft_countsize : %d", ft_square(1, 3));
	printf("ft_itoa : %s", ft_itoa(-10));

	return (0);
}