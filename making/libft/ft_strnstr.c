/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:29:37 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 16:06:43 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str1;
	char	*str2;

	str1 = (char *)haystack;
	str2 = (char *)needle;
	i = 0;
	if (str2 == 0)
		return (str1);
	while (i < len)
	{
		if (str1[i] == str2[0])
		{
			j = 0;
			while (str2[j] && str1[j + i] == str2[j])
				j++;
			if (str2[j] == 0)
				return (&str1[i]);
		}
		i++;
	}
	return (0);
}
