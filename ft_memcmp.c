/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:32:17 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/17 15:01:16 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//La fonction memcmp compare les n premiers octets des zones mémoire s1 et s2.
//Elle renvoie un entier inférieur, égal, ou supérieur à zéro, si s1 est
//respectivement inférieure, égale ou supérieur à s2.

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
