/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 04:36:20 by apergens          #+#    #+#             */
/*   Updated: 2014/01/06 01:47:11 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

static int		ft_st_init_deleg(char *str);

int				ft_st_init(void)
{
	int		ret;
	int		success;
	char	*err;
	char	*termtype;

	ret = 0;
	if ((termtype = getenv("TERM")) == NULL && (ret = 1))
		ft_st_init_deleg("specify a terminal type with `setenv TERM'.");
	if ((success = tgetent(NULL, termtype)) < 0 && (ret = 1))
		ft_st_init_deleg("could not access the termcap data base.");
	if (success == 0 && (ret = ft_st_init_deleg(NULL)))
	{
		err = ft_strdup("terminal type `%s' is not defined.\n");
		ft_printf_fd(err, STDERR_FILENO, termtype);
		free(err);
	}
	return (ret);
}

static int		ft_st_init_deleg(char *str)
{
	ft_putstr_fd("ft_select: ", STDERR_FILENO);
	if (str != NULL)
		ft_putendl_fd(str, STDERR_FILENO);
	return (1);
}
