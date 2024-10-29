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

int	ft_atoi(const char *str)
{
	int	result;
	int	signe;
	
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
	return (result * signe);
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", ft_atoi(" -34"));
	printf("%d\n", atoi(" -34"));
}