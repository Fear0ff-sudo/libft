/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 10:43:32 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 11:20:23 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next)
		last = last->next;
	last->next = new;
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*test1;
// 	t_list	*test2;
// 	t_list	*test3;

// 	test1 = ft_lstnew("1");
// 	test2 = ft_lstnew("2");
// 	test3 = ft_lstnew("3");
// 	ft_lstadd_front(&test2, test1);
// 	ft_lstadd_back(&test1, test3);
// 	printf("%s\n", (char *)test1->content);
// 	printf("%s\n", (char *)test1->next->content);
// 	printf("%s\n", (char *)test1->next->next->content);
// 	printf("%d", ft_lstsize(test1));
// }