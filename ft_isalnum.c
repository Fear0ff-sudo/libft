/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 11:04:34 by amanet            #+#    #+#             */
/*   Updated: 2026/11/02 11:23:50 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (8);
	else if (c >= 48 && c <= 57)
		return (8);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(int argv, char **argc)
// {
// 	if (argv > 1)
// 	{
// 		printf("%d\n", ft_isalnum(argc[1][0]));
// 		printf("%d", isalnum(argc[1][0]));
// 	}
// 	return (0);
// }
