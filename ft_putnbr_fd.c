/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:56:56 by amanet            #+#    #+#             */
/*   Updated: 2026/11/12 20:54:33 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	c = (n % 10) + '0';
	write(fd, &c, 1);
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