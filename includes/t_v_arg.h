/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_v_arg.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/21 03:15:30 by apergens          #+#    #+#             */
/*   Updated: 2014/04/21 03:15:57 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_V_ARG_H
# define T_V_ARG_H

typedef struct		s_v_arg
{
	int				i;
	char			c;
	char			*s;
	int				type;
	struct s_v_arg	*next;
}					t_v_arg;

#endif
