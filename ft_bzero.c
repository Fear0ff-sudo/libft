/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 10:37:33 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 10:52:01 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;
	char			*sp;

	sp = (char *)s;
	i = 0;
	while (i < n)
	{
		sp[i] = '\0';
		i++;
	}
}
// #include <stdio.h>
// #include <strings.h>

// int	main(void)
// {
// 	char *str1 = "Hello";
// 	char *str2 = "Hello";

// 	printf("%s\n", str1);
// 	ft_bzero(&str1, 5);
// 	printf("%s\n\n", (char*)&str1);
// 	printf("%s\n", str2);
// 	bzero(&str2, 5);
// 	printf("%s\n", (char*)&str2);
// 	return (0);
// }

// // to test the function, replace '\0'
