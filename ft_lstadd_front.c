/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanet <amanet@student.42nice.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:41:57 by amanet            #+#    #+#             */
/*   Updated: 2026/11/11 01:48:23 by amanet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	t_list	*lst;
// 	t_list	*new;

// 	lst = ft_lstnew("toto");
// 	new = ft_lstnew("tata");
// 	ft_lstadd_front(&new, lst);
// 	printf("%s\n", (char *)lst->content);
// 	printf("%s", (char *)lst->next->content);
// 	return (0);
// }