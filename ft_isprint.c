/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-nac <sait-nac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 18:11:07 by sait-nac          #+#    #+#             */
/*   Updated: 2024/10/26 17:51:09 by sait-nac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	unsigned char tmp_c;

	tmp_c = (unsigned char)c;
	if (c < 0 || c >= 255)
		return 0;
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
