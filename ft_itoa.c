/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:54:27 by soufiane          #+#    #+#             */
/*   Updated: 2024/10/31 18:40:19 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*to_zero(char *str)
{
	str[0] = '0';
	return (str);
}

static int	lent(long n)
{
	size_t	count;

	count = 0;
	if (n <= 0)
	{
		n = n * -1;
		count++;
	}
	while (n > 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	b;
	int		i;
	char	*str;

	b = n;
	str = (char *)malloc(sizeof(char) * (lent(b) + 1));
	if (str == NULL)
		return (NULL);
	str[i--] = '\0';
	if (b == 0)
		to_zero(str);
	else if (n < 0)
	{
		str[0] = '-';
		b *= -1;
	}
	while (b > 0)
	{
		str[i--] = b % 10 + '0';
		b /= 10;
	}
	return (str);
}
