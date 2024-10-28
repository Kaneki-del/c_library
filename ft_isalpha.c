/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:03:09 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/26 17:51:44 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char tmp_c;

	tmp_c = (unsigned char)c;
	if (c < 0 || c >= 255)
		return 0;
	if ((tmp_c >= 97 && tmp_c <= 122) || (tmp_c >= 65 && tmp_c <= 90))
		return (1);
	return (0);
}
int main()
{
printf("%d", ft_isalpha(-150));
}
