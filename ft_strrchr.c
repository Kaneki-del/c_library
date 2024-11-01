/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:44:36 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/30 22:11:34 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	while (*s)
	{
		if (*s == c)
			result = (char *)s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (result);
}
