/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:32:02 by marvin            #+#    #+#             */
/*   Updated: 2024/10/29 18:32:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	result;
	int		signe;

	result = 0;
	signe = 1;
	while (*str == 32 || ((*str >= 9) && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		if (signe < 0 && (result > LONG_MAX / 10))
			return (0);
		else if (result > LONG_MAX / 10)
			return (-1);
		result = (result * 10) + (*(str++) - 48);
	}
	if (result * signe < LONG_MIN)
		return (0);
	return (result * signe);
}
