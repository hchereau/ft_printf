/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hucherea <hucherea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 18:19:36 by hucherea          #+#    #+#             */
/*   Updated: 2024/05/29 18:46:55 by hucherea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

# define BUFFER_SIZE 1024

int	ft_printf(const char *str, ...);

#endif
