/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readfd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 17:44:25 by japarbs           #+#    #+#             */
/*   Updated: 2019/08/05 18:00:11 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Takes an FD and reads the lines via GNL, pushed line is stored in Holder.
**	temp is set to gnlread, gnlread is realloced for the new line.
**	The contents are pushed to the new double pointer.
*/

#include "../../libft.h"

char	**ft_readfd(int fd)
{
	char	**gnlread;
	char	**temp;
	char	*holder;
	size_t	i;
	size_t	count;

	if (fd < 0)
		return (NULL);
	count = 0;
	gnlread = NULL;
	while (get_next_line(fd, &holder) == 1)
	{
		i = 0;
		temp = gnlread;
		if (!(gnlread = (char **)ft_memalloc(sizeof(char *) * (++count + 2))))
			return (NULL);
		if (count > 1)
			while (temp[++i - 1])
				gnlread[i - 1] = temp[i - 1];
		gnlread[count - 1] = holder;
		ft_strdel((char **)&temp);
	}
	return (gnlread);
}
