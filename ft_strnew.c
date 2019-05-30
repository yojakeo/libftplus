/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 23:47:13 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:49:32 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;

	if (!(newstr = (char *)malloc(sizeof(char) * size + 1)))
		return (NULL);
	ft_bzero(newstr, size + 1);
	return (newstr);
}
