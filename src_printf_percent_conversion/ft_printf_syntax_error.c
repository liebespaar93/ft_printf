/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_syntax_error.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:56:29 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 08:33:38 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

int	ft_printf_syntax_error(t_syntax *c_syntax)
{
	if (c_syntax->width < 0)
		c_syntax->width = -1;
	if (c_syntax->precision < 0)
		c_syntax->precision = -1;
	return (0);
}
