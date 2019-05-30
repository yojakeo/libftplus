/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 16:19:41 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:48:31 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(const char *dst, const char *src)
{
	int		i;
	char	*str;

	str = (char *)dst;
	i = -1;
	while (src[++i])
		str[i] = src[i];
	str[i] = '\0';
	return (str);
}
