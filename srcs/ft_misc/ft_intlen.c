/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 02:21:59 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/05 18:02:05 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Takes an int and counts the amount of bytes needed to print the integer
**	including the negative sign.
*/

int		ft_intlen(int n)
{
	size_t			len;
	unsigned int	nbr;

	len = 0;
	if (n < 0)
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
		nbr /= 10;
		len++;
	}
	return (len);
}
