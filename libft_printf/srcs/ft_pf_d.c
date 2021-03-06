/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pf_d.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/19 01:48:05 by apergens          #+#    #+#             */
/*   Updated: 2014/03/18 12:41:29 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

char	*ft_pf_d(va_list ap, char *opts, int *ret)
{
	char	*str;

	if (opts == NULL)
		return (ft_strnew(0));
	str = ft_itoa(va_arg(ap, int));
	*ret = ft_strlen(str);
	return (str);
}
