/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/01 17:06:26 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:37 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	*ft_memalloc(size_t size)
{
	void	*nmem;

	if (!(nmem = malloc(size)))
		return (NULL);
	ft_bzero(nmem, size);
	return (nmem);
}
