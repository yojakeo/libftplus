/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 14:46:32 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/10 15:59:57 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	if (!s)
	{
		ft_putstr_fd("null\n", fd);
		return ;
	}
	ft_putstr_fd((char *)s, fd);
	ft_putchar_fd('\n', fd);
}
