/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:56:56 by amanet            #+#    #+#             */
/*   Updated: 2026/11/09 15:42:57 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	ft_handlenegative(int *np, int fd)
{
	if (*np < 0)
	{
		*np *= -1;
		write(fd, "-", 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	int		last;
	char	res;

	i = 0;
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		ft_handlenegative(&n, fd);
		last = n;
		while (last > 10)
		{
			last /= 10;
			i++;
		}
		res = last + 48;
		write(fd, &res, 1);
		if (i > 0)
			ft_putnbr_fd(n - (last * ft_square(1, i)), fd);
	}
}
// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		ft_putnbr_fd(ft_atoi(argv[1]), 1);
// 		//ft_putnbr_fd(-2147483648, 1);
// 	}
// 	return (0);
// }