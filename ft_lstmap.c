/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 21:21:35 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 22:10:46 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	void	*content;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (temp == NULL)
		{
			del(content);
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, temp);
		lst = lst->next;
	}
	return (res);
}

// #include <stdio.h>

// void	ft_del(void *s)
// {
// 	free(s);
// }

// void	*ft_addm(void *content)
// {
// 	return (ft_strjoin((char *)content, "M"));
// }

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
// 	t_list	*res;

// 	list = NULL;
// 	test1 = ft_lstnew("1");
// 	test2 = ft_lstnew("2");
// 	test3 = ft_lstnew("3");
// 	ft_lstadd_back(&list, test1);
// 	ft_lstadd_back(&list, test2);
// 	ft_lstadd_back(&list, test3);
// 	ft_lstiter(list, ft_printcontent);
// 	res = ft_lstmap(list, ft_addm, ft_del);
// 	ft_lstiter(res, ft_printcontent);
// 	return (0);
// }