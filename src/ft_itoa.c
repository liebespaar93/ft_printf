/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 08:12:19 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 08:13:12 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

char	ft_index_a(__int128 *num, int index);

int	ft_itoa(__int128 value, char **str, int index)
{
	__int128	tmp;
	int			int_tmp;
	size_t		len;

	len = 0;
	int_tmp = 1;
	if (value <= 0 && ++len)
		int_tmp = -1;
	tmp = (__int128)value * (__int128)int_tmp;
	while (tmp && ++len)
		tmp /= index;
	*str = (char *)malloc(sizeof(char) * (len + 1));
	if (!*str)
		return (-1);
	(*str)[len] = '\0';
	(*str)[len - 1] = '0';
	tmp = (__int128)value * (__int128)int_tmp;
	int_tmp = len;
	while (tmp && len--)
		(*str)[len] = ft_index_a(&tmp, index);
	if (value < 0 && len--)
		(*str)[len] = '-';
	return (int_tmp);
}

char	ft_index_a(__int128 *num, int index)
{
	char		a;

	if (*num % index >= 10)
		a = (char)(*num % index + 0x61 - 10);
	else
		a = (char)(*num % index + 0x30);
	*num /= index;
	return (a);
}
