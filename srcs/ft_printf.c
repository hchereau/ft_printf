/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:45:25 by hucherea          #+#    #+#             */
/*   Updated: 2024/06/01 12:03:26 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			state;
	char		*str_final;
	const int	(*tab_function_state[2])(char**) = {standard_state,
		converter_state};

	state = standard;
	va_start(args, str);
	while (state != end)
	{
		state = tab_function_state[state](&str_final);
	}
	va_end(args);
	return (end_state(&str_final));
}
