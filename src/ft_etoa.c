/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_etoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 09:17:37 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 09:18:21 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

char	*ft_etoa(int e)
{
	char	*str_e;
	char	*str_num;
	char	*tmp_free;
	char	*sign;
	int		len;

	sign = "+";
	if (e < 0)
	{
		e *= -1;
		sign = "-";
	}
	len = ft_itoa(e, &str_num, 10);
	if (len == 1 && ++len)
	{
		tmp_free = ft_strjoin("0", str_num);
		free(str_num);
		str_num = tmp_free;
	}
	str_e = ft_strjoin("e", sign);
	tmp_free = ft_strjoin(str_e, str_num);
	free(str_e);
	free(str_num);
	return (tmp_free);
}
