/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:20:52 by amanet            #+#    #+#             */
/*   Updated: 2026/11/09 14:37:40 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(i, s + i);
			i++;
		}
	}
}
// #include <stdio.h>

// void	ft_test(unsigned int i , char *s)
// {
// 	printf("%s %d\n", s, i);
// }

// int main(int argc, char ** argv)
// {
// 	if (argc > 1)
// 	{
// 		ft_striteri(argv[1], ft_test);
// 	}
// }