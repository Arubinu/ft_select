/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 01:47:01 by apergens          #+#    #+#             */
/*   Updated: 2014/03/18 13:03:10 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_pf_s(va_list ap, char *opts, int *ret)
{
	char	*str;

	if (opts == NULL)
		return (ft_strnew(0));
	str = va_arg(ap, char *);
	if (str == NULL)
	{
		*ret = 6;
		return (ft_strdup("(null)"));
	}
	*ret = ft_strlen(str);
	return (ft_strdup(str));
}
