/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_caption.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/09 08:11:18 by apergens          #+#    #+#             */
/*   Updated: 2014/01/10 18:51:27 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

static int		ft_st_caption_clear(int clear, int key, int on);
static void		ft_st_caption_line(int line, int lenx);
static void		ft_st_caption_putstr(char *str, int line, int lenx);

int				ft_st_caption(int key, int clear)
{
	int			i;
	int			lenx;
	int			leny;

	if (ft_st_caption_clear(clear, key, 0))
		return (0);
	if (key == GKEY_ZERO && ft_st_caption_clear(clear, key, 1))
	{
		i = -1;
		lenx = ft_st_termsize(0) - 25;
		leny = ft_st_termsize(1);
		ft_st_cmdgoto(lenx, 0);
		ft_st_cmdput("mr");
		ft_st_caption_line(0, lenx);
		ft_st_caption_putstr(" | files color :   dot | ", 1, lenx);
		ft_st_caption_putstr(" | all/nothing :  *  / | ", 2, lenx);
		ft_st_caption_putstr(" | moving item :  +  - | ", 3, lenx);
		ft_st_caption_putstr(" | select item : space | ", 4, lenx);
		ft_st_caption_putstr(" | delete item :   del | ", 5, lenx);
		ft_st_caption_putstr(" | move select :  <^v> | ", 6, lenx);
		ft_st_caption_line(7, lenx);
		ft_st_cmdput("me");
		return (1);
	}
	return (0);
}

static int		ft_st_caption_clear(int clear, int key, int on)
{
	static int	active;

	if (key == GKEY_ZERO && clear == -1)
	{
		active = 1;
		return (1);
	}
	else if (on)
	{
		active = 1;
		return (1);
	}
	else if (clear)
	{
		if (active)
			ft_st_clear();
		active = 0;
		return (1);
	}
	return (0);
}

static void		ft_st_caption_line(int line, int lenx)
{
	ft_st_cmdgoto(lenx, line);
	ft_putstr_fd(" +", isatty(STDOUT_FILENO));
	ft_putchar_loop_fd('-', isatty(STDOUT_FILENO), 21);
	ft_putstr_fd("+ ", isatty(STDOUT_FILENO));
	return ;
}

static void		ft_st_caption_putstr(char *str, int line, int lenx)
{
	ft_st_cmdgoto(lenx, line);
	ft_putstr_fd(str, isatty(STDOUT_FILENO));
	return ;
}
