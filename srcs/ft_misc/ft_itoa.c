/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:54:23 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:32 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

char	*ft_itoa(int n)
{
	size_t			i;
	unsigned int	nbr;
	char			*res;

	if (n == 0)
		return (ft_strdup("0"));
	i = ft_intlen(n);
	if (!(res = ft_strnew(i)))
		return (NULL);
	if (n < 0)
		res[0] = '-';
	nbr = (n < 0) ? -n : n;
	i--;
	while (nbr != 0)
	{
		res[i] = nbr % 10 + '0';
		nbr /= 10;
		i--;
	}
	return (res);
}
