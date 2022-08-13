/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_num_type.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 22:50:12 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 08:17:51 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

void	ft_printf_num_type(char **str, t_syntax *c_syntax, \
	va_list *va, va_list va_origin)
{
	int	num;

	num = ft_strchr_num(str);
	if (**str == '$' && (*str)++)
		ft_va_arg_index(va, va_origin, num, 1);
	else
		(*c_syntax).width = num;
}
