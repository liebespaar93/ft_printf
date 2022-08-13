/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_precision.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:44:50 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 08:42:49 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

int	ft_printf_precision(char **str, va_list *va, va_list va_origin)
{
	if ((*str)++ && 0x30 <= **str && **str <= 0x39)
		return (ft_strchr_num(str));
	if (**str == '*')
		return (ft_printf_asterisk(str, va, va_origin));
	return (0);
}
