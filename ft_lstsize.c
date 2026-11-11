/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 01:48:32 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 02:08:58 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	if (lst == NULL)
		return (0);
	i = 1;
	while (lst->next != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst1;
// 	t_list	*lst2;
// 	t_list	*lst3;
// 	t_list	*lst4;

// 	lst1 = ft_lstnew("1");
// 	lst2 = ft_lstnew("2");
// 	lst3 = ft_lstnew("3");
// 	lst4 = ft_lstnew("4");
// 	ft_lstadd_front(&lst4, lst3);
// 	ft_lstadd_front(&lst3, lst2);
// 	ft_lstadd_front(&lst2, lst1);
// 	printf("%d", ft_lstsize(lst1));
// 	return (0);
// }