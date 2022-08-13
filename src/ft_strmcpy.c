/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyoulee <kyoulee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 10:29:48 by kyoulee           #+#    #+#             */
/*   Updated: 2022/06/16 10:29:51 by kyoulee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strmcpy(char **dst, char *src)
{
	while (*src)
		*(*dst)++ = *src++;
}
