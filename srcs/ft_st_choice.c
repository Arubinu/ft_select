/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_st_choice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apergens <apergens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/09/26 04:36:20 by apergens          #+#    #+#             */
/*   Updated: 2014/01/10 03:35:23 by apergens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftselect.h"

t_choice	*ft_st_choice(int argc, char **argv)
{
	t_choice	*choice;

	choice = (t_choice*)malloc(sizeof(t_choice) * ++argc);
	while (argc--)
	{
		(choice + argc)->str = (argc >= 0) ? *(argv + argc) : NULL;
		(choice + argc)->check = 0;
	}
	return (choice);
}
