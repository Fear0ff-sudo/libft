/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:40:47 by amanet            #+#    #+#             */
/*   Updated: 2026/11/09 14:49:28 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		ft_putchar_fd(argv[1][0], 1);
// 	}
// 	return (0);
// }