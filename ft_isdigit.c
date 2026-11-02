/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 10:59:55 by amanet            #+#    #+#             */
/*   Updated: 2026/11/02 11:24:50 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(int argv, char **argc)
// {
// 	if (argv > 1)
// 	{
// 		printf("%d\n", ft_isdigit(argc[1][0]));
// 		printf("%d", isdigit(argc[1][0]));
// 	}
// 	return (0);
// }
