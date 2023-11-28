/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:46:36 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/21 16:11:25 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
La ft memmov copie n octets depuis la zone mémoire src vers la zone mémoire
dest. Les deux zones peuvent se chevaucher : la copie se passe comme si les
octets de src étaient d'abord copiés dans une zone temporaire qui ne
chevauche ni src ni dest, et les octets sont ensuite copiés de la zone
temporaire vers dest.
*/
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;

	destination = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (destination > source)
		while (n--)
			destination[n] = source[n];
	else
		while (n--)
			*destination++ = *source++;
	return (dest);
}
