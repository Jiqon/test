/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 16:07:57 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 16:17:06 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t count, size_t size)
{
	void	*tmp;

	if (!(tmp = malloc(count * size)))
		return (0);
	ft_bzero(tmp, (count * size));
	return (tmp);
}