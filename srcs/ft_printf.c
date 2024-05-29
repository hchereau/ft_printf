/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:45:25 by hucherea          #+#    #+#             */
/*   Updated: 2024/05/29 19:01:12 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*final_str;

	ft_bzero(buffer, BUFFER_SIZE + 1);
	while (fill_buffer(buffer, str))
	{
		final_str = fill_string(final_str, buffer);
	}
	write(STDOUT_FILENO, final_str, ft_strlen(final_str));

}
