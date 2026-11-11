/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:30:46 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 10:42:18 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*test1;
// 	t_list	*test2;
// 	t_list	*test3;
// 	t_list	*test4;

// 	test1 = ft_lstnew("1");
// 	test2 = ft_lstnew("2");
// 	test3 = ft_lstnew("3");
// 	test4 = ft_lstnew("4");
// 	ft_lstadd_front(&test4, test3);
// 	ft_lstadd_front(&test3, test2);
// 	ft_lstadd_front(&test2, test1);
// 	printf("%s\n", (char *)test1->content);
// 	printf("%s", (char *)ft_lstlast(test1)->content);
// 	return (0);
// }