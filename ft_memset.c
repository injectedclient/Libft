/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:38:09 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/17 15:02:59 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* La fonction memset() remplit les n premiers octets de la zone mémoire
pointée par s avec l'octet c.*/

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
