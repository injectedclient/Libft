/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlambert <nlambert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 12:19:52 by nlambert          #+#    #+#             */
/*   Updated: 2023/11/21 16:11:42 by nlambert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	len_needle;

	if ((!haystack || !needle) && n == 0)
		return (NULL);
	if (*needle == 0 || haystack == needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (*haystack && len_needle <= n--)
	{
		if (!(ft_strncmp((char *)haystack, (char *)needle, len_needle)))
			return ((char *)haystack);
	haystack++;
	}
	return (NULL);
}
