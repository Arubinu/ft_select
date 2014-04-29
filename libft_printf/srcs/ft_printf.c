/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/17 13:34:40 by apergens          #+#    #+#             */
/*   Updated: 2014/03/18 12:48:31 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

int		ft_printf(const char *format, ...)
{
	va_list		ap;
	char		*ptr;
	size_t		len;

	len = 0;
	ptr = (char *)format;
	va_start(ap, format);
	while (ptr && *ptr && (len += ft_get_v_arg(ap, &ptr, 1)))
		;
	va_end(ap);
	return ((int)len);
}
