/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 02:18:01 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/10 03:37:08 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes an unsigned int type (up to unsigned LL) and converts to ASCII.
**	While the number isn't 0 the mod of the nbr and base is used as an index to
**	the Key string, applying the proper letter before dividing it by base.
**	Repeated and then return the resulting string.
*/

char	*ft_itoa_base(unsigned long long nbr, int base)
{
	size_t				len;
	char				*res;
	char				*key;

	key = "0123456789abcdef";
	if (nbr == 0)
		return (ft_strdup("0"));
	if (base < 2 && base > 16)
		return (NULL);
	len = ft_intlenbase(nbr);
	if (!(res = ft_strnew(len)))
		return (NULL);
	res[--len] = 0;
	while (nbr != 0)
	{
		res[--len] = key[nbr % base];
		nbr /= base;
	}
	return (res);
}