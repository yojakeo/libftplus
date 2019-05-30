/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:08:06 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:49:15 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	if (!s || !f)
		return (NULL);
	i = -1;
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		map[i] = (*f)(i, s[i]);
	return (map);
}
