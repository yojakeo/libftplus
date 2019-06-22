/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 03:07:31 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:28 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int		len;

	if (!s)
	{
		ft_putstr_fd("null\n", fd);
		return ;
	}
	len = ft_strlen((char const *)s);
	write(fd, (char const *)s, len);
}
