/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 20:11:51 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 16:02:21 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;

	if (dst == src || !len)
		return (dst);
	d_tmp = (unsigned char *)dst;
	s_tmp = (unsigned char *)src;
	if (dst < src)
	{
		while (len--)
			*d_tmp++ = *s_tmp++;
	}
	else
	{
		while (len--)
			*(d_tmp + len) = *(s_tmp + len);
	}
	return (dst);
}
