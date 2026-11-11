/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:41:57 by amanet            #+#    #+#             */
/*   Updated: 2026/11/10 16:00:13 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*res;

	res = lst;
	res->next = new;
}

#include <stdio.h>

int	main(void)
{
	void	*test;
	void	*test1;
	void	*test1p;

	test = ft_lstnew("toto");
	test1 = ft_lstnew("tata");
	ft_lstadd_front(test1, test);
	test1p = test1->next;
	printf("%s", (char *)test1p->content);
	return (0);
}