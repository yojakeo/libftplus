/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 02:21:59 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/10 03:37:18 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Takes an int and counts the amount of bytes needed to print the integer
**	including the negative sign.
*/

size_t	ft_intlen(long long n)
{
	size_t		len;
	long long	nbr;

	len = 0;
	if (n < 0)
		nbr = -n;
	else
		nbr = n;
	if (nbr == 0)
		return (1);
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}
