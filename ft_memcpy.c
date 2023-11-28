/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 16:10:10 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/17 15:01:26 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*la fonction memcpy() copie n octets depuis la zone mémoire src vers la
zone mémoire dest.
Les deux zones ne doivent pas se chevaucher.*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest);
}
