/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:45:25 by hucherea          #+#    #+#             */
/*   Updated: 2024/05/30 17:22:51 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_test(void)
{
	enum e_state	state;

	state = standard;
	if (state == standard)
		printf("bonjour");
	else
		printf("nop");
}
