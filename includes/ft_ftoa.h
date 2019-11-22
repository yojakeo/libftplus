/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ftoa.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:20:45 by japarbs           #+#    #+#             */
/*   Updated: 2019/11/21 21:06:46 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FTOA_H
# define FT_FTOA_H

# include "libft.h"

/*
**	Structures
*/
typedef	struct			s_ftftoa
{
	int					base;
	int					zeros;
	int					precision;
	unsigned long long	inum;
	long double			fnum;
	char				*res;
}						t_ftftoa;
/*
**	Main function
*/
char					*ft_ftoa_base(long double input, int precision, int base);
char					*ft_ftoa(long double input, int precision);
#endif
