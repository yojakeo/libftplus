/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 22:42:27 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/14 23:06:41 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	ft_strrealloc takes 2 char pointers, str is the pointer to be realloced
**	and tmp is a given operation return (such as an strsub char *) to be
**	pushed back to *str after a size change. 
*/

char	*ft_strrealloc(char *str, char *tmp)
{
	ft_strdel(&str);
	if (!(str = ft_strdup(tmp)))
		return (NULL);
	ft_strdel(&tmp);
	return (str);
}
