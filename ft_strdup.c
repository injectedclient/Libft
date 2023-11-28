/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:54:37 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/21 17:56:34 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = (char *)malloc(ft_strlen(s) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s, ft_strlen(s) + 1);
	return (dest);
}
