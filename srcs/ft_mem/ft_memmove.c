/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 00:44:19 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:34 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*dstcpy;
	const unsigned char	*srccpy;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	dstcpy = (unsigned char *)dst;
	srccpy = (unsigned char *)src;
	if (dstcpy > srccpy)
		while (0 < len)
		{
			len--;
			dstcpy[len] = srccpy[len];
		}
	else
		while (len > i)
		{
			dstcpy[i] = srccpy[i];
			i++;
		}
	return (dst);
}
