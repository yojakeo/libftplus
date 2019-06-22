/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/11 18:04:04 by japarbs           #+#    #+#             */
/*   Updated: 2019/06/21 19:43:39 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;

	if (lst)
	{
		new_list = (*f)(lst);
		lst = lst->next;
		while (lst)
		{
			ft_lstpush(&new_list, (*f)(lst));
			lst = lst->next;
		}
		return (new_list);
	}
	return (NULL);
}
