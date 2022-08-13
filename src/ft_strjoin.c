/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 07:45:43 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/10 07:51:16 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_percent.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char				*str;
	long unsigned int	s1_len;
	long unsigned int	s2_len;

	if (s1 == (void *)0 || s2 == (void *)0)
		return ((void *)0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	str = (char *)malloc(s1_len + s2_len + 1);
	if (str == NULL)
		return ((void *)0);
	while (*s1 != '\0')
		*str++ = *s1++;
	while (*s2 != '\0')
		*str++ = *s2++;
	*str = '\0';
	return (str - s1_len - s2_len);
}
