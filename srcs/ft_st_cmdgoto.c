/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_cmdgoto.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 04:36:20 by apergens          #+#    #+#             */
/*   Updated: 2014/01/08 00:42:28 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

int		ft_st_cmdgoto(int x, int y)
{
	char	*ptr;
	char	*ptr2;

	if ((ptr = tgetstr("cm", NULL)) != NULL)
	{
		if ((ptr2 = tgoto(ptr, x, y)) != NULL)
			ft_putstr_fd(ptr2, isatty(STDOUT_FILENO));
	}
	return (1);
}
