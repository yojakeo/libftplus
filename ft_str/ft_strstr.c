/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 12:51:00 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 18:27:50 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = -1;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[++i])
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (needle[j] && haystack[j + i] == needle[j])
				++j;
			if (!needle[j])
				return ((char*)&haystack[i]);
		}
	}
	return (NULL);
}
