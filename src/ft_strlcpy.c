/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 07:44:25 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/14 16:39:28 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

size_t	ft_strlcpy(char *dst, const char *src,
		size_t dstsize)
{
	unsigned char		*dptr;
	unsigned char		*sptr;
	size_t				count;

	dptr = (unsigned char *)dst;
	sptr = (unsigned char *)src;
	if (src == (void *)0)
		*sptr = '\0';
	count = ft_strlen((const char *)sptr);
	if (dstsize == 0)
		return (count);
	while (*sptr != '\0' && dstsize-- > 0)
		*dptr++ = *sptr++;
	if (*dptr != '\0')
		*dptr = '\0';
	return (count);
}
