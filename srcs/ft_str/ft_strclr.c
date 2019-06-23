/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 00:15:27 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/22 22:10:01 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Sets all chars in the passed string to \0.
*/

void	ft_strclr(char *s)
{
	if (!s) 
		return ;
	ft_memset(s, '\0', (size_t)ft_strlen(s));
}
