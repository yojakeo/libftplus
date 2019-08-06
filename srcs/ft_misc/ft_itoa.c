/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:54:23 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/05 18:04:41 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	Takes an int and converts it into an ASCII string.
**	First the length of the int (including it's sign if negative) is stored in
**	i (index) and a string is allocated to hold the converted int. If the
**	number is less than 0 then '-' is set to the first index, a new number
**	is declared as to not modify the original and is made sure to be positive.
**	while our number isn't 0 the mod of the nbr is taken, converted to ASCII
**	and stored in the current index, nbr is divided by 10 and the index moves
**	back. Repeated and then return the resulting string.
*/

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
