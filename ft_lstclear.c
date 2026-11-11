/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 15:15:49 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 15:43:07 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = next;
	}
}
// void	ft_del(void *s)
// {
// 	free(s);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*test1;
// 	t_list	*test2;
// 	t_list	*test3;

// 	test1 = ft_lstnew(ft_strdup("1"));
// 	test2 = ft_lstnew(ft_strdup("2"));
// 	test3 = ft_lstnew(ft_strdup("3"));
// 	ft_lstadd_back(&test1, test2);
// 	ft_lstadd_back(&test2, test3);

// 	printf("%s\n", (char *)test1->content);
// 	printf("%s\n", (char *)test1->next->content);
// 	ft_lstclear(&test1, ft_del);
// 	// printf("%s\n", (char *)test1->content);
// 	if (test1 == NULL)
// 		printf("NULL");
// 	return (0);
// }
