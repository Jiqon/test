/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 13:12:02 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 16:07:21 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*tmp;
	int		last;
	int		i;

	i = 0;
	last = -1;
	tmp = (char *)s;
	while (tmp[i])
	{
		if (tmp[i] == c)
			last = i;
		i++;
	}
	if (last == -1 && c != 0)
		return (0);
	if (c == 0)
		return (&tmp[i]);
	return (&tmp[last]);
}
