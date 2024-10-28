/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:44:36 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/28 20:36:39 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	*ft_strrchr(const char *s, int c)
{
	char *result;
	while (*s)
	{
		result = ft_strchr(s, c);
		s++;
	}
	return result;
}
int main()
{
	ft_strrchr("Hello, world!", 'o');
}
