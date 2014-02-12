/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_termsize.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/03 05:40:25 by apergens          #+#    #+#             */
/*   Updated: 2014/01/03 06:02:07 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

int		ft_st_termsize(int y)
{
	int				ret;
	struct ttysize	twin;
	struct winsize	win;

	ret = 0;
	if (!ioctl(STDIN_FILENO, TIOCGSIZE, &twin))
		ret = (y) ? twin.ts_lines : twin.ts_cols;
	else if (!ioctl(STDIN_FILENO, TIOCGWINSZ, &win))
		ret = (y) ? win.ws_row : win.ws_col;
	return (ret);
}
