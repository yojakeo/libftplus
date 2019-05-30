/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlenbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 19:05:10 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/13 20:16:59 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlenbase(int n, int base)
{
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (base < 2 && base > 16)
		return (0);
	if (n < 0 && base == 10)
	{
		nbr = -n;
		len++;
	}
	else
		nbr = n;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= base;
		len++;
	}
	return (len);
}
