/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 21:03:00 by japarbs           #+#    #+#             */
/*   Updated: 2019/11/21 21:03:46 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/*
**	Takes a number and brings it up to a given power.
*/

long		ft_pow(int a, int b)
{
	long	power;

	power = 1;
	while (b > 0)
	{
		power *= a;
		--b;
	}
	return (power);
}
