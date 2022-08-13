/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_n.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 08:50:32 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 12:45:24 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

void	ft_printf_n(va_list *va, t_syntax *c_syntax, int *len)
{
	int	*va_ptr;

	va_ptr = va_arg(*va, int *);
	*va_ptr = *len;
	ft_memset(c_syntax, 0, sizeof(t_syntax));
}
