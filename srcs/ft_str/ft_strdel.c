/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 00:02:44 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/22 20:57:19 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Frees the given string and sets the pointer to NULL.
*/

void	ft_strdel(char **as)
{
	if (!as)
		return ;
	ft_memdel((void **)as);
}
