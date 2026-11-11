/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:10:27 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 11:38:44 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
// void	ft_del(void *s)
// {
// 	free(s);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*test1;

// 	test1 = ft_lstnew(ft_strdup("HelloWorld"));
// 	printf("%s", (char *)test1->content);
// 	ft_lstdelone(test1, ft_del);
// 	return (0);
// }
