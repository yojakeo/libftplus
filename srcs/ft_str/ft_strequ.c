/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 15:18:04 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/10 16:05:19 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Checks if two string are equal.
*/

int	ft_strequ(char const *s1, char const *s2)
{
	if (s1 && s2)
		return (!ft_strcmp(s1, s2));
	return (0);
}
