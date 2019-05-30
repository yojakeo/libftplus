/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 14:06:55 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:49:53 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		last_pos;
	int		ischar;

	if (c == '\0')
		return ((char *)str + ft_strlen(str));
	i = 0;
	last_pos = 0;
	ischar = 0;
	while (str[i])
	{
		if ((char)c == str[i])
		{
			last_pos = i;
			ischar = 1;
		}
		i++;
	}
	if (ischar)
		return ((char *)&str[last_pos]);
	return (NULL);
}
