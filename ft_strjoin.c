/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 16:42:45 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:48:59 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;

	if (!s1 || !s2)
		return (NULL);
	newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (!(newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(newstr, s1);
	ft_strcat(newstr, s2);
	return (newstr);
}
