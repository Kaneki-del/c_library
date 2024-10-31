/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 17:55:46 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/31 19:37:42 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	lent;
	char	*str;
	int		i;

	i = 0;

	if (!s || !f)
		return (NULL);
	if (s[0] == '\0')
		return (ft_strdup(""));
	lent = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * lent + 1);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
