/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/02 09:52:01 by amanet            #+#    #+#             */
/*   Updated: 2026/11/04 18:30:56 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
// #include <stdio.h>
// #include <ctype.h>

// int	main(int argv, char **argc)
// {
// 	if (argv > 1)
// 	{
// 		printf("%d\n", ft_isalpha(argc[1][0]));
// 		printf("%d", isalpha(argc[1][0]));
// 	}
// 	return (0);
// }
