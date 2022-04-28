/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 19:54:36 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 15:36:15 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*d_tmp;
	unsigned char	*s_tmp;

	if (!dst && !src)
		return (0);
	d_tmp = (unsigned char *)dst;
	s_tmp = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d_tmp[i] = s_tmp[i];
		i++;
	}
	return (dst);
}
