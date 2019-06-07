/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 15:57:51 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/06 22:08:24 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char		**splitstrs;
	size_t		sub;
	size_t		index;
	size_t		cpy;

	sub = 0;
	index = 0;
	if (!s || !(splitstrs = (char **)malloc(sizeof(char *) * \
		(ft_findsubstrs(s, c) + 1))))
		return (NULL);
	while (index < (size_t)ft_findsubstrs(s, c))
	{
		cpy = 0;
		if (!(splitstrs[index] = ft_strnew(ft_strdlen(&s[sub], c))))
			return (NULL);
		while (s[sub] == c)
			sub++;
		while (s[sub] && s[sub] != c)
			splitstrs[index][cpy++] = s[sub++];
		index++;
	}
	splitstrs[index] = NULL;
	return (splitstrs);
}
