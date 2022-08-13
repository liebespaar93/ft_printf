/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 07:49:25 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 08:02:00 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

size_t	ft_strcpy(char *dst, const char *src)
{
	unsigned char		*dptr;
	unsigned char		*sptr;
	size_t				count;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	if (src == (void *)0)
		*sptr = '\0';
	count = ft_strlen((const char *)sptr);
	while (*sptr != '\0')
		*dptr++ = *sptr++;
	if (*dptr != '\0')
		*dptr = '\0';
	return (count);
}
