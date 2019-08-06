/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 12:32:35 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/05 18:00:45 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

/*
**	converts a string of chars into an int, is passed *str and while the
**	current index is any whitespace it passes over them until either a number
**	or sign is reached. if '-' s (sign) is set to -1. if '+' it is passed over.
**	While the current index is numeric the previous result is multiplied by 10
**	and the current index is added to the int. Once the index is no longer
**	numeric the result is returned.	
*/

int		ft_atoi(const char *str)
{
	int				i;
	int				s;
	long long		res;

	i = 0;
	s = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\r' || str[i] == '\n' || \
		str[i] == '\f' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			s = -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	return (res * s);
}
