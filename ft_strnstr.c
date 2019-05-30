/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 15:13:33 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:49:37 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	int		j;

	i = -1;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[++i] && (size_t)i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && haystack[j + i] == needle[j] &&
				(size_t)(i + j) < len)
				++j;
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
	}
	return (NULL);
}
