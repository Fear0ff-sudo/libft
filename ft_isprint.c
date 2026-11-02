/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:12:52 by amanet            #+#    #+#             */
/*   Updated: 2026/11/02 11:22:25 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(int argv, char **argc)
// {
// 	if (argv > 1)
// 	{
// 		printf("%d\n", ft_isprint(argc[1][0]));
// 		printf("%d", isprint(argc[1][0]));
// 	}
// 	return (0);
// }
