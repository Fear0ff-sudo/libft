/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 20:15:18 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 20:27:44 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c = c - 32);
	return (c);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		printf("%c", ft_toupper(argv[1][0]));
// 	}
// 	return (0);
// }