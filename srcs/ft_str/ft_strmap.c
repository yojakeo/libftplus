/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:54:30 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:20 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*map;

	if (!s || !f)
		return (NULL);
	i = -1;
	if (!(map = ft_strnew(ft_strlen(s))))
		return (NULL);
	while (s[++i])
		map[i] = (*f)(s[i]);
	return (map);
}
