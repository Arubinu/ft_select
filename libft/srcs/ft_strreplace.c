/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/31 16:32:06 by apergens          #+#    #+#             */
/*   Updated: 2014/03/09 05:54:54 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strreplace(char *str, char c1, char c2)
{
	int		i;

	i = -1;
	while (*(str + (++i)))
	{
		if (*(str + i) == c1)
			*(str + i) = c2;
	}
	return ;
}
