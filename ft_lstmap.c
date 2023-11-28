/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:18:22 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/21 12:44:21 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*stock;
	t_list	*newlist;

	newlist = NULL;
	while (lst)
	{
		stock = ft_lstnew(f(lst->content));
		ft_lstadd_back(&newlist, stock);
		if (!stock)
		{
			ft_lstclear(&newlist, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (newlist);
}
