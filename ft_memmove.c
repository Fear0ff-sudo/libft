/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 11:41:23 by amanet            #+#    #+#             */
/*   Updated: 2026/11/03 11:46:41 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, const void *src, unsigned long n)
{
	unsigned long	i;
	const void		*temp;
	char			*destp;
	char			*srcp;

	i = 0;
	temp = src;
	destp = (char *)dest;
	srcp = (char *)temp;
	while (i < n)
	{
		destp[i] = srcp[i];
		i++;
	}
	return (dest);
}
// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	*src = "Hello";
// 	char	*dest = "World";
// 	char	*src1 = "Hello";
// 	char	*dest1 = "World";

// 	printf("%s\n", (char*)ft_memmove(&dest, &src, 5));
// 	printf("%s", (char*)memmove(&dest1, &src1, 5));
// 	return (0);
// }
