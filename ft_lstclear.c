/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 14:18:16 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/17 12:40:13 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*stock;

	if (!del || !lst)
		return ;
	while (*lst)
	{
		stock = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = stock;
	}
}
