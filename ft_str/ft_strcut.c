/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 01:29:22 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 18:28:06 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strcut(char const *str, size_t start, size_t end)
{
	size_t		len;
	size_t		i;
	size_t		j;
	char		*cpy;

	if (!str)
		return ((char *)str);
	if (start > end)
	{
		cpy = ft_strnew(0);
		return (cpy);
	}
	i = 0;
	j = start;
	len = ft_strlen(str);
	len = len - start - (len - end);
	if (!(cpy = ft_strnew(len)))
		return (NULL);
	while (len > i)
		cpy[i++] = str[j++];
	return (cpy);
}
