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
	long long	result;
	int			signe;

	result = 0;
	while (*str == 32 || ((*str >= 9) && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		result = result * 10;
		result = result + *str - 48;
		str++;
	}
	if (result * signe >= LLONG_MAX)
		return (-1);
	else if (result * signe <= LLONG_MIN)
		return (0);
	return (result * signe);
}
