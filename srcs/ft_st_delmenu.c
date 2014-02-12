/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_delmenu.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 04:36:20 by apergens          #+#    #+#             */
/*   Updated: 2014/01/04 16:01:47 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

void			ft_st_delmenu(int *argc, t_choice **choice, int *pos)
{
	int		i;
	int		start;

	i = *pos - 1;
	start = 0;
	while (++i < (*argc - (1 + 1)) && (*choice + (i + 1))->str != NULL)
	{
		start++;
		(*choice + i)->str = (*choice + (i + 1))->str;
		(*choice + i)->check = (*choice + (i + 1))->check;
		(*choice + (i + 1))->str = NULL;
		(*choice + (i + 1))->check = 0;
	}
	if (!start)
	{
		if (!*pos)
			ft_st_signal(1);
		(*choice + *pos)->str = NULL;
		(*choice + *pos)->check = 0;
		*pos -= 1;
	}
	*argc -= 1;
	return ;
}
