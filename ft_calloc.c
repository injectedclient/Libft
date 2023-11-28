/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 17:26:38 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/20 15:39:03 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La fonction calloc() alloue la mémoire nécessaire pour un tableau de nmemb
éléments de size octets, et renvoie un pointeur vers la mémoire allouée.
Cette zone est remplie avec des zéros. Si nmemb ou si size est nulle, calloc
renvoie soit NULL ou un unique pointeur qui pourra être passé ultérieurement
à free() avec succès.*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tab;
	size_t	overflow;

	overflow = nmemb * size;
	if (overflow == 0)
	{
		tab = malloc(1);
		if (!tab)
			return (NULL);
		return (tab);
	}
	if (size && overflow / size != nmemb)
		return (NULL);
	tab = malloc(nmemb * size);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, nmemb * size);
	return (tab);
}
