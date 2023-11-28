/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:03:28 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/21 16:18:35 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*La ft memchr examine les n premiers octets de la zone mémoire pointée
par s à la recherche du caractère c.  Le premier octet correspondant à c
(interprété comme un unsigned char) arrête l'opération.*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*string == (unsigned char)c)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
