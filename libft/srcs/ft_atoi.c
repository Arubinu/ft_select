/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 06:20:18 by apergens          #+#    #+#             */
/*   Updated: 2014/04/15 21:39:44 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		result;
	int		negative;
	char	*save;
	char	*trim;

	result = 0;
	trim = (str != NULL) ? ft_strtrim(str) : NULL;
	if ((save = trim) == NULL || !*trim)
		return (0);
	negative = (*trim == '-') ? 1 : 0;
	trim += (*trim == '-' || *trim == '+') ? 1 : 0;
	while (*trim)
	{
		if (ft_isdigit(*trim))
			result = result * 10 + (*trim - '0');
		else
			break ;
		trim++;
	}
	result = negative ? result * -1 : result;
	return (ft_free_return(result, &save));
}
