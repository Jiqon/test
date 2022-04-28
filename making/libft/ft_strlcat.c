/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:45:16 by jiwha             #+#    #+#             */
/*   Updated: 2022/03/17 14:46:26 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_len(char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

size_t	ft_strlcat(char	*dest, char	*src, size_t	size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = str_len(dest);
	s_len = str_len(src);
	if (size <= d_len)
		return (size + s_len);
	i = 0;
	while (src[i] && i < size - 1 - d_len)
	{
		dest[i + d_len] = src[i];
		i++;
	}
	dest[i + d_len] = '\0';
	return (d_len + s_len);
}
