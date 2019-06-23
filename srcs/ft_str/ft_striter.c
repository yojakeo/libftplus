/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 14:08:47 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/22 07:27:39 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Travels through a string and applies a function to each char.
*/

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	i = -1;
	if (s && f)
		while (s[++i])
			f(&s[i]);
}
