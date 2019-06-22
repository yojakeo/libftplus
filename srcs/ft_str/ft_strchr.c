/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 13:59:42 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:27 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;

	i = 0;
	if ((char)c == '\0')
		return ((char *)str + ft_strlen(str));
	while (str[i])
	{
		if ((char)c == str[i])
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
