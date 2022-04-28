/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwha <jiwha@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 14:45:16 by jiwha             #+#    #+#             */
/*   Updated: 2022/04/28 15:29:05 by jiwha            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	else if (c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	n;
	long	sign;
	size_t	i;

	n = 0;
	sign = 1;
	i = 0;
	while (str[i] && ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
		sign = -1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while (str[i] && ('0' <= str[i]) && (str[i] <= '9'))
	{
		n = (n * 10) + (str[i] - '0');
		if (n > 2147483647 && sign == 1)
			return (-1);
		if (n > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (sign * n);
}
