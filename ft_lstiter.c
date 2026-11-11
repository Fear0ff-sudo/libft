/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:56:30 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 21:20:37 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// #include <stdio.h>

// void	ft_printcontent(void *content)
// {
// 	printf("%s\n", (char *)content);
// }

// int	main(void)
// {
// 	t_list	*list;
// 	t_list	*test1;
// 	t_list	*test2;
// 	t_list	*test3;

// 	list = NULL;
// 	test1 = ft_lstnew("1");
// 	test2 = ft_lstnew("2");
// 	test3 = ft_lstnew("3");
// 	ft_lstadd_back(&list, test1);
// 	ft_lstadd_back(&list, test2);
// 	ft_lstadd_back(&list, test3);
// 	ft_lstiter(list, ft_printcontent);
// 	return (0);
// }