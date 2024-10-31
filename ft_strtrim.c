/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:55:17 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/30 23:02:57 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	toremove(const char *set, char c);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	str_lent;
	int		i;

	i = 0;
	str_lent = ft_strlen(s1) -1;
	while (toremove(set, s1[i]))
		i++;
	while (toremove(set, s1[str_lent]))
		str_lent--;
	return (ft_substr(s1, i, str_lent - i + 1));
}

static int	toremove(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
