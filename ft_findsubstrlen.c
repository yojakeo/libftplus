/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_findsubstrlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 14:38:33 by japarbs           #+#    #+#             */
/*   Updated: 2019/05/12 03:45:32 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_findsubstrlen(char const *str, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}
